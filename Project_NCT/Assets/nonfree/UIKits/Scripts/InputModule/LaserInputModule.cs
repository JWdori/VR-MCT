using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
#if UIKIT_VIVE_STEAM_2
using Valve.VR;
using Valve.VR.InteractionSystem;
#endif

namespace VRUiKits.Utils
{
    [RequireComponent(typeof(VREventSystemHelper))]
    public class LaserInputModule : UIKitInputModule
    {
        public VRPlatform platform;
        public Pointer pointer = Pointer.LeftHand;
        /*** Define trigger key to fire events for different platforms ***/
#if UIKIT_OCULUS
        public OVRInput.Button trigger = OVRInput.Button.PrimaryIndexTrigger;
        OVRInput.Controller activeController;
        OVRCameraRig oculusRig;
        public Transform TargetControllerTransform
        {
            get
            {
                if (pointer == Pointer.LeftHand)
                {
                    return oculusRig.leftHandAnchor;
                }
                else if (pointer == Pointer.RightHand)
                {
                    return oculusRig.rightHandAnchor;
                }
                else
                {
                    return oculusRig.centerEyeAnchor;
                }
            }
        }
#endif

        // Deprecated Steam VR 1.0 plugin
#if UIKIT_VIVE
        public Valve.VR.EVRButtonId trigger = Valve.VR.EVRButtonId.k_EButton_SteamVR_Trigger;
        [SerializeField]
        SteamVR_ControllerManager steamVRControllerManager;
        SteamVR_TrackedObject trackedObjectL, trackedObjectR;

        public SteamVR_Controller.Device ControllerLeft
        {
            get
            {
                if (null == trackedObjectL) { return null; }
                if (-1 == (int)trackedObjectL.index) { return null; }
                return SteamVR_Controller.Input((int)trackedObjectL.index);
            }
        }

        public SteamVR_Controller.Device ControllerRight
        {
            get
            {
                if (null == trackedObjectR) { return null; }
                if (-1 == (int)trackedObjectR.index) { return null; }
                return SteamVR_Controller.Input((int)trackedObjectR.index);
            }
        }
#endif

#if UIKIT_VIVE_STEAM_2
        public SteamVR_Action_Boolean triggerAction;
        [SerializeField]
        SteamVR_PlayArea steamVRPlayArea;
        Transform controllerLeft, controllerRight, centerEye;

        [Header("Other Settings")]
        public bool setupHmdExplicitly;
        [HideInInspector]
        public Transform m_leftHand, m_rightHand, m_centerEye;
        // Properties
        public Transform TargetControllerTransform
        {
            get
            {
                if (setupHmdExplicitly)
                {
                    if (pointer == Pointer.LeftHand)
                    {
                        return m_leftHand;
                    }
                    else if (pointer == Pointer.RightHand)
                    {
                        return m_rightHand;
                    }
                    else
                    {
                        return m_centerEye;
                    }
                }
                else
                {
                    if (pointer == Pointer.LeftHand)
                    {
                        return controllerLeft;
                    }
                    else if (pointer == Pointer.RightHand)
                    {
                        return controllerRight;
                    }
                    else
                    {
                        return centerEye;
                    }
                }
            }
        }
#endif

        /********** Gaze ***********/
        GameObject currentTarget;
        float currentClickTime;

        /*********************/
        public static LaserInputModule instance { get { return _instance; } }
        private static LaserInputModule _instance = null;
        Camera helperCamera;
        UIKitPointer controller;

        // Support variables
        bool triggerPressed = false;
        bool triggerPressedLastFrame = false;
        PointerEventData pointerEventData;
        Vector3 lastRaycastHitPoint;
        float pressedDistance;  // Distance the laser travelled while pressed.

        protected override void Awake()
        {
            base.Awake();

            // Check if instance already exists
            if (_instance == null)
            {
                //if not, set instance to this
                _instance = this;
            }
            //If instance already exists and it's not this:
            else if (_instance != this)
            {
                Debug.LogWarning("Trying to instantiate multiple UIKitLaserInputModule.");
                Destroy(gameObject);
            }
        }

        protected override void Start()
        {
            base.Start();

            // Create a helper camera that will be used for raycasts
            helperCamera = new GameObject("Helper Camera").AddComponent<Camera>();
            helperCamera.transform.parent = this.transform;
            // Add physics raycaster for 3d objects
            helperCamera.gameObject.AddComponent<PhysicsRaycaster>();
            helperCamera.orthographic = true;
            helperCamera.orthographicSize = 0.01f;
            helperCamera.cullingMask = 0;
            helperCamera.clearFlags = CameraClearFlags.Nothing;
            helperCamera.nearClipPlane = 0.01f;
            helperCamera.enabled = false;
            SetCanvasCamera();
            SetupHmd();
            // Detect scene change
            SceneManager.sceneLoaded += OnSceneLoaded;
        }

        void OnSceneLoaded(Scene scene, LoadSceneMode mode)
        {
            SetCanvasCamera();
            SetupHmd();
        }

        void SetCanvasCamera()
        {
            if (null != helperCamera)
            {
                // Assign all the canvases with the helper camera;
                Canvas[] canvases = Resources.FindObjectsOfTypeAll<Canvas>();
                foreach (Canvas canvas in canvases)
                {
                    canvas.worldCamera = helperCamera;
                }
            }
        }

        void SetupHmd()
        {
#if UIKIT_OCULUS
            SetupOculus();
#endif

#if UIKIT_VIVE
            SetupViveControllers();
#endif

#if UIKIT_VIVE_STEAM_2
            if (!setupHmdExplicitly)
            {
                SetupVive2Controllers();
                if (null == triggerAction)
                {
                    Debug.LogError("No trigger action assigned");
                    return;
                }
            }
#endif
        }

        public void SetController(UIKitPointer _controller)
        {
            controller = _controller;
        }

        public void RemoveController(UIKitPointer _controller)
        {
            if (null != controller && controller == _controller)
            {
                controller = null;
            }
        }

        public override void Process()
        {
            if (null != controller)
            {
                UpdateHelperCamera();
                if (pointer == Pointer.Eye)
                {
                    ProcessGazePointer();
                }
                else
                {
                    CheckTriggerStatus();
                    ProcessLaserPointer();
                }
            }
        }

        // Update helper camera position
        void UpdateHelperCamera()
        {
            helperCamera.transform.position = controller.transform.position;
            helperCamera.transform.rotation = controller.transform.rotation;
        }

        void CheckTriggerStatus()
        {
            /*** Define trigger key to fire events for different platforms ***/
#if UIKIT_OCULUS
            activeController = OVRInput.GetActiveController();
            // Check if Oculus Rift is being used, then we need to check if button is pressed on target pointer.
            if (activeController == OVRInput.Controller.Touch ||
            activeController == OVRInput.Controller.LTouch || activeController == OVRInput.Controller.RTouch)
            {
                if (pointer == Pointer.LeftHand)
                {
                    triggerPressed = OVRInput.Get(trigger, OVRInput.Controller.LTouch);
                }
                else if (pointer == Pointer.RightHand)
                {
                    triggerPressed = OVRInput.Get(trigger, OVRInput.Controller.RTouch);
                }
            }
            else
            {
                triggerPressed = OVRInput.Get(trigger);
            }
#elif UIKIT_VIVE_STEAM_2
            // Using the action system
            if (pointer == Pointer.LeftHand)
            {
                triggerPressed = triggerAction.GetState(SteamVR_Input_Sources.LeftHand);
            }
            else if (pointer == Pointer.RightHand)
            {
                triggerPressed = triggerAction.GetState(SteamVR_Input_Sources.RightHand);
            }

#elif UIKIT_VIVE
            if (pointer == Pointer.LeftHand)
            {
                if (null == ControllerLeft) { return; }
                triggerPressed = ControllerLeft.GetPress(trigger);
            }
            else if (pointer == Pointer.RightHand)
            {
                if (null == ControllerRight) { return; }
                triggerPressed = ControllerRight.GetPress(trigger);
            }
#else
            triggerPressed = Input.GetKey("space");
#endif
        }

        void ProcessGazePointer()
        {
            SendUpdateEventToSelectedObject();

            PointerEventData eventData = GetPointerEventData();
            ProcessMove(eventData);

            if (null != eventData.pointerEnter)
            {
                GameObject handler = ExecuteEvents.GetEventHandler<IPointerClickHandler>(eventData.pointerEnter);
                if (currentTarget != handler)
                {
                    currentTarget = handler;
                    currentClickTime = Time.realtimeSinceStartup + delayTimeInSeconds + gazeTimeInSeconds;
                    RaiseGazeChangeEvent(currentTarget);
                }

                if (null != currentTarget && Time.realtimeSinceStartup > currentClickTime)
                {
                    // search for a click handler
                    ExecuteEvents.ExecuteHierarchy(currentTarget, eventData, ExecuteEvents.pointerClickHandler);
                    currentTarget = null;
                    RaiseGazeChangeEvent(currentTarget);
                }
            }
            else
            {
                currentTarget = null;
                RaiseGazeChangeEvent(currentTarget);
            }
        }

        void ProcessLaserPointer()
        {
            SendUpdateEventToSelectedObject();

            PointerEventData eventData = GetPointerEventData();
            ProcessPress(eventData);
            ProcessMove(eventData);
            if (triggerPressed)
            {
                ProcessDrag(eventData);

                if (!Mathf.Approximately(eventData.scrollDelta.sqrMagnitude, 0.0f))
                {
                    var scrollHandler = ExecuteEvents.GetEventHandler<IScrollHandler>(eventData.pointerCurrentRaycast.gameObject);
                    ExecuteEvents.ExecuteHierarchy(scrollHandler, eventData, ExecuteEvents.scrollHandler);
                }
            }

            triggerPressedLastFrame = triggerPressed;
        }

        void ProcessPress(PointerEventData eventData)
        {
            var currentOverGo = eventData.pointerCurrentRaycast.gameObject;

            // PointerDown notification
            if (TriggerPressedThisFrame())
            {
                eventData.eligibleForClick = true;
                eventData.delta = Vector2.zero;
                eventData.dragging = false;
                eventData.useDragThreshold = true;
                eventData.pressPosition = eventData.position;
                eventData.pointerPressRaycast = eventData.pointerCurrentRaycast;
                pressedDistance = 0;

                if (eventData.pointerEnter != currentOverGo)
                {
                    // send a pointer enter to the touched element if it isn't the one to select...
                    HandlePointerExitAndEnter(eventData, currentOverGo);
                    eventData.pointerEnter = currentOverGo;
                }

                // search for the control that will receive the press
                // if we can't find a press handler set the press
                // handler to be what would receive a click.
                var newPressed = ExecuteEvents.ExecuteHierarchy(currentOverGo, eventData, ExecuteEvents.pointerDownHandler);

                // didnt find a press handler... search for a click handler
                if (newPressed == null)
                    newPressed = ExecuteEvents.GetEventHandler<IPointerClickHandler>(currentOverGo);

                float time = Time.unscaledTime;

                if (newPressed == eventData.lastPress)
                {
                    var diffTime = time - eventData.clickTime;
                    if (diffTime < 0.3f)
                        ++eventData.clickCount;
                    else
                        eventData.clickCount = 1;

                    eventData.clickTime = time;
                }
                else
                {
                    eventData.clickCount = 1;
                }

                eventData.pointerPress = newPressed;
                eventData.rawPointerPress = currentOverGo;

                eventData.clickTime = time;

                // Save the drag handler as well
                eventData.pointerDrag = ExecuteEvents.GetEventHandler<IDragHandler>(currentOverGo);

                if (eventData.pointerDrag != null)
                    ExecuteEvents.Execute(eventData.pointerDrag, eventData, ExecuteEvents.initializePotentialDrag);
            }

            // PointerUp notification
            if (TriggerReleasedThisFrame())
            {
                ExecuteEvents.Execute(eventData.pointerPress, eventData, ExecuteEvents.pointerUpHandler);

                // see if we button up on the same element that we clicked on...
                var pointerUpHandler = ExecuteEvents.GetEventHandler<IPointerClickHandler>(currentOverGo);

                // PointerClick and Drop events
                if (eventData.pointerPress == pointerUpHandler && eventData.eligibleForClick)
                {
                    ExecuteEvents.Execute(eventData.pointerPress, eventData, ExecuteEvents.pointerClickHandler);
                }
                else if (eventData.pointerDrag != null && eventData.dragging)
                {
                    ExecuteEvents.ExecuteHierarchy(currentOverGo, eventData, ExecuteEvents.dropHandler);
                }

                eventData.eligibleForClick = false;
                eventData.pointerPress = null;
                eventData.rawPointerPress = null;
                pressedDistance = 0;

                if (eventData.pointerDrag != null && eventData.dragging)
                {
                    ExecuteEvents.Execute(eventData.pointerDrag, eventData, ExecuteEvents.endDragHandler);
                }
                eventData.dragging = false;
                eventData.pointerDrag = null;

                // send exit events as we need to simulate this on touch up on touch device
                ExecuteEvents.ExecuteHierarchy(eventData.pointerEnter, eventData, ExecuteEvents.pointerExitHandler);
                eventData.pointerEnter = null;
            }
        }

        PointerEventData GetPointerEventData()
        {
            if (null == pointerEventData)
            {
                pointerEventData = new PointerEventData(eventSystem);
            }
            pointerEventData.Reset();
            pointerEventData.position = new Vector2(helperCamera.pixelWidth / 2,
                helperCamera.pixelHeight / 2);
            pointerEventData.scrollDelta = Vector2.zero;

            eventSystem.RaycastAll(pointerEventData, m_RaycastResultCache);
            RaycastResult currentRaycast = FindFirstRaycast(m_RaycastResultCache);
            pointerEventData.pointerCurrentRaycast = currentRaycast;

            // Delta is used to define if the cursor was moved.
            // It will be used for drag threshold calculation, which we'll calculate angle in degrees
            // between the last and the current raycasts.
            Ray ray = new Ray(helperCamera.transform.position, helperCamera.transform.forward);
            Vector3 hitPoint = ray.GetPoint(currentRaycast.distance);
            // Angle Calculation
            Vector3 directionA = Vector3.Normalize(helperCamera.transform.position - hitPoint);
            Vector3 directionB = Vector3.Normalize(helperCamera.transform.position - lastRaycastHitPoint);
            pointerEventData.delta = new Vector2(Vector3.Angle(directionA, directionB), 0);
            lastRaycastHitPoint = hitPoint;

            m_RaycastResultCache.Clear();
            return pointerEventData;
        }

        bool TriggerReleasedThisFrame()
        {
            return (triggerPressedLastFrame && !triggerPressed);
        }

        bool TriggerPressedThisFrame()
        {
            return (!triggerPressedLastFrame && triggerPressed);
        }

        // Copied from StandaloneInputModule
        private bool SendUpdateEventToSelectedObject()
        {
            if (eventSystem.currentSelectedGameObject == null)
                return false;

            var data = GetBaseEventData();
            ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.updateSelectedHandler);
            return data.used;
        }

        // Modified from StandaloneInputModule
        public override void ActivateModule()
        {
            base.ActivateModule();

            var toSelect = eventSystem.currentSelectedGameObject;
            if (toSelect == null)
                toSelect = eventSystem.firstSelectedGameObject;

            eventSystem.SetSelectedGameObject(toSelect, GetBaseEventData());
        }

        // Copied from StandaloneInputModule
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
        private bool ShouldStartDrag(float threshold, bool useDragThreshold)
        {
            if (!useDragThreshold)
                return true;
            return pressedDistance >= threshold;
        }

        // Copied from PointerInputModule
        protected virtual void ProcessMove(PointerEventData pointerEvent)
        {
            var targetGO = (Cursor.lockState == CursorLockMode.Locked ? null : pointerEvent.pointerCurrentRaycast.gameObject);
            HandlePointerExitAndEnter(pointerEvent, targetGO);
        }

        // Modiefied from PointerInputModule
        private void ProcessDrag(PointerEventData eventData)
        {
            // If pointer is not moving or if a button is not pressed (or pressed control did not return drag handler), do nothing
            if (!eventData.IsPointerMoving() || eventData.pointerDrag == null)
                return;

            // We are eligible for drag. If drag did not start yet, add drag distance
            if (!eventData.dragging)
            {
                pressedDistance += eventData.delta.x;

                if (ShouldStartDrag(eventSystem.pixelDragThreshold, eventData.useDragThreshold))
                {
                    ExecuteEvents.Execute(eventData.pointerDrag, eventData, ExecuteEvents.beginDragHandler);
                    eventData.dragging = true;
                }
            }

            // Drag notification
            if (eventData.dragging)
            {
                // Before doing drag we should cancel any pointer down state
                // And clear selection!
                if (eventData.pointerPress != eventData.pointerDrag)
                {
                    ExecuteEvents.Execute(eventData.pointerPress, eventData, ExecuteEvents.pointerUpHandler);

                    eventData.eligibleForClick = false;
                    eventData.pointerPress = null;
                    eventData.rawPointerPress = null;
                }
                ExecuteEvents.Execute(eventData.pointerDrag, eventData, ExecuteEvents.dragHandler);
            }
        }

#if UIKIT_OCULUS
        void SetupOculus()
        {
            if (null != OVRManager.instance)
            {
                oculusRig = OVRManager.instance.GetComponent<OVRCameraRig>();
            }

            if (null == oculusRig)
            {
                oculusRig = Object.FindObjectOfType<OVRCameraRig>();
            }

            if (null == oculusRig)
            {
                Debug.LogError("Please import Oculus Utilities and put OVRCameraRig prefab into your scene");
            }
        }
#endif

#if UIKIT_VIVE
        void SetupViveControllers()
        {
            if (null == steamVRControllerManager)
            {
                SteamVR_ControllerManager[] existingManagers = GameObject.FindObjectsOfType<SteamVR_ControllerManager>();

                //ignore externalcamera.cfg for mixed reality videos
                if (existingManagers.GetLength(0) > 0)
                {
                    for (int i = 0; i < existingManagers.GetLength(0); i++)
                    {
                        if (existingManagers[i].gameObject.name != "External Camera")
                            steamVRControllerManager = existingManagers[i];
                    }
                }
            }

            if (null != steamVRControllerManager)
            {
                trackedObjectL = steamVRControllerManager.left.GetComponent<SteamVR_TrackedObject>();
                trackedObjectR = steamVRControllerManager.right.GetComponent<SteamVR_TrackedObject>();
            }
            else
            {
                Debug.LogError("Please import SteamVR Plugin and put [CameraRig] prefab into your scene");
                return;
            }
        }
#endif

#if UIKIT_VIVE_STEAM_2
        void SetupVive2Controllers()
        {
            if (null == steamVRPlayArea)
            {
                steamVRPlayArea = FindObjectOfType<SteamVR_PlayArea>();
            }

            if (null != steamVRPlayArea)
            {
                foreach (SteamVR_Behaviour_Pose pose in steamVRPlayArea.GetComponentsInChildren<SteamVR_Behaviour_Pose>(true))
                {
                    if (pose.inputSource == SteamVR_Input_Sources.RightHand)
                    {
                        controllerRight = pose.transform;
                    }
                    else if (pose.inputSource == SteamVR_Input_Sources.LeftHand)
                    {
                        controllerLeft = pose.transform;
                    }
                }

                centerEye = steamVRPlayArea.GetComponentInChildren<Camera>(true).transform;
            }
            else
            {
                Debug.LogError("Please import SteamVR Plugin and put [CameraRig] prefab into your scene");
            }
        }
#endif
    }

    public enum VRPlatform
    {
        NONE,
        OCULUS,
        VIVE,
        VIVE_STEAM2
    }

    public enum Pointer
    {
        RightHand,
        LeftHand,
        Eye
    }
}
