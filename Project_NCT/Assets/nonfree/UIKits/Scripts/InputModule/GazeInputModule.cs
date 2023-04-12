using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
#if UNITY_2017_2_OR_NEWER
    using UnityEngine.XR;
#else
using XRSettings = UnityEngine.VR.VRSettings;
#endif

namespace VRUiKits.Utils
{
    public class GazeInputModule : UIKitInputModule
    {
        #region Public Variables
        public bool previewWithoutHeadset = false;
        public bool preventRepeatClick = false;
        public RaycastResult currentRaycast;
        public static GazeInputModule Instance;
        #endregion

        #region Private Variables
        PointerEventData pointerEventData;
        PointerEventData lastPressedEventData;
        GameObject currentTarget;
        float currentClickTime;
        #endregion

        protected GazeInputModule()
        {
            Instance = this;
        }

        public override void Process()
        {
            GazeControl();
            HandleSelection();
        }

        #region Private Methods
        void GazeControl()
        {
            if (null == pointerEventData)
            {
                pointerEventData = new PointerEventData(eventSystem);
            }
#if UNITY_EDITOR
            if (previewWithoutHeadset)
            {
                pointerEventData.position = new Vector2(Screen.width / 2, Screen.height / 2);
            }
            else
            {
                // Pointer will be in the center of the eyes;
                pointerEventData.position = new Vector2(XRSettings.eyeTextureWidth / 2,
                    XRSettings.eyeTextureHeight / 2);
            }
#else
            // Pointer will be in the center of the eyes;
            pointerEventData.position = new Vector2(XRSettings.eyeTextureWidth / 2,
                XRSettings.eyeTextureHeight / 2);
#endif

            pointerEventData.delta = Vector2.zero;
            List<RaycastResult> raycastResults = new List<RaycastResult>();
            eventSystem.RaycastAll(pointerEventData, raycastResults);
            currentRaycast = pointerEventData.pointerCurrentRaycast
            = FindFirstRaycast(raycastResults);
            ProcessMove(pointerEventData);
        }

        void HandleSelection()
        {
            if (null != pointerEventData.pointerEnter)
            {
                GameObject handler = ExecuteEvents.GetEventHandler<IPointerClickHandler>(pointerEventData.pointerEnter);
                if (currentTarget != handler)
                {
                    currentTarget = handler;
                    currentClickTime = Time.realtimeSinceStartup + delayTimeInSeconds + gazeTimeInSeconds;
                    RaiseGazeChangeEvent(currentTarget);
                    ReleaseLastPress();
                }

                if (null != currentTarget && Time.realtimeSinceStartup > currentClickTime)
                {
                    // search for the control that will receive the press
                    var newPressed = ExecuteEvents.ExecuteHierarchy(currentTarget, pointerEventData, ExecuteEvents.pointerDownHandler);
                    pointerEventData.pointerPress = newPressed;
                    // search for a click handler
                    ExecuteEvents.ExecuteHierarchy(currentTarget, pointerEventData, ExecuteEvents.pointerClickHandler);
                    lastPressedEventData = pointerEventData;

                    // Optional: Prevent repeat clicking on same object
                    if (preventRepeatClick)
                    {
                        currentClickTime = float.MaxValue;
                    }
                    else
                    {
                        currentTarget = null;
                    }
                }
            }
            else
            {
                currentTarget = null;
                RaiseGazeChangeEvent(currentTarget);
                ReleaseLastPress();
            }
        }
        #endregion

        void ReleaseLastPress()
        {
            if (null == lastPressedEventData)
            {
                return;
            }
            ExecuteEvents.Execute(lastPressedEventData.pointerPress, lastPressedEventData, ExecuteEvents.pointerUpHandler);
            lastPressedEventData = null;
        }

        public override void ActivateModule()
        {
            base.ActivateModule();

            var toSelect = eventSystem.currentSelectedGameObject;
            if (toSelect == null)
                toSelect = eventSystem.firstSelectedGameObject;

            eventSystem.SetSelectedGameObject(toSelect, GetBaseEventData());
        }

        public override void DeactivateModule()
        {
            base.DeactivateModule();
            ClearSelection();
        }

        // Modified from PointerInputModule
        protected void ClearSelection()
        {
            var baseEventData = GetBaseEventData();
            eventSystem.SetSelectedGameObject(null, baseEventData);
        }

        // Copied from PointerInputModule
        protected virtual void ProcessMove(PointerEventData pointerEvent)
        {
            var targetGO = (Cursor.lockState == CursorLockMode.Locked ? null : pointerEvent.pointerCurrentRaycast.gameObject);
            HandlePointerExitAndEnter(pointerEvent, targetGO);
        }
    }
}