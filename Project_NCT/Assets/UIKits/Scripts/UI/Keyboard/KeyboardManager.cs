/***
 * Author: Yunhan Li
 * Any issue please contact yunhn.lee@gmail.com
 ***/

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;
using System.Collections;
using System.Collections.Generic;
#if UIKIT_TMP
using TMPro;
#endif

namespace VRUiKits.Utils
{
    public class KeyboardManager : MonoBehaviour
    {
        #region Public Variables
        [Header("User defined")]
        [Tooltip("If the character is uppercase at the initialization")]
        public bool isUppercase = false;

        [Header("Essentials")]
        public Transform keys;

#if UIKIT_TMP
        public static TMP_InputField Target
        {
            get
            {
                var _this = EventSystem.current.currentSelectedGameObject;

                if (null != _this && null != _this.GetComponent<TMP_InputField>())
                {
                    return _this.GetComponent<TMP_InputField>();
                }

                if (null != target)
                {
                    return target;
                }

                return null;
            }
            set
            {
                lastTarget = target;
                target = value;
            }
        }
        public static TMP_InputField lastTarget;

        /*
         Record a helper target for some 3rd party packages which lost focus when
         user click on keyboard.
         */
        private static TMP_InputField target;
#else
        public static InputField Target
        {
            get
            {
                var _this = EventSystem.current.currentSelectedGameObject;

                if (null != _this && null != _this.GetComponent<InputField>())
                {
                    return _this.GetComponent<InputField>();
                }

                if (null != target)
                {
                    return target;
                }

                return null;
            }
            set
            {
                lastTarget = target;
                target = value;
            }
        }
        public static InputField lastTarget;

        /*
        Record a helper target for some 3rd party packages which lost focus when
        user click on keyboard.
        */
        private static InputField target;
#endif

        public delegate void OnInputValueUpdatedHandler(string value);
        public event OnInputValueUpdatedHandler OnInputValueUpdated;
        #endregion

        #region Private Variables

        private string Input
        {
            get
            {
                if (null == Target)
                {
                    return "";
                }

                return Target.text;
            }
            set
            {
                if (null == Target)
                {
                    return;
                }

                Target.text = value;
            }
        }
        private Key[] keyList;
        private bool capslockFlag;
        #endregion

        #region Monobehaviour Callbacks
        void Awake()
        {
            keyList = keys.GetComponentsInChildren<Key>(true);
        }

        void Start()
        {
            foreach (var key in keyList)
            {
                key.OnKeyClicked += GenerateInput;
            }
            capslockFlag = isUppercase;
            CapsLock();
        }
        #endregion

        #region Public Methods
        public void Backspace()
        {
            if (null != Target)
            {
                ForceInputFieldActivated();
                StartCoroutine(WaitTargetProcessEvent(() =>
                {
                    Target.ProcessEvent(Event.KeyboardEvent("backspace"));
                }));
            }
        }

        public void Clear()
        {
            SetInput("");
        }

        public void CapsLock()
        {
            foreach (var key in keyList)
            {
                if (key is Alphabet)
                {
                    key.CapsLock(capslockFlag);
                }
            }
            capslockFlag = !capslockFlag;
        }

        public void Shift()
        {
            foreach (var key in keyList)
            {
                if (key is Shift)
                {
                    key.ShiftKey();
                }
            }
        }

        public void GenerateInput(string s)
        {
            if (null != Target)
            {
                ForceInputFieldActivated();
                StartCoroutine(WaitTargetProcessEvent(() => SimulateKeyboardEvent(s)));
            }
        }

        public void SetInput(string s)
        {
            Input = s;
            if (null != Target)
            {
                ForceInputFieldActivated();
                Target.MoveTextEnd(false);
                if (null != Target.GetComponent<InputFocusHelper>())
                {
                    Target.GetComponent<InputFocusHelper>().StorePositionInfo();
                }
            }
        }
        #endregion

        void ForceInputFieldActivated()
        {
            // Force target input field activated if losing selection
            if (null != Target.GetComponent<InputFocusHelper>())
            {
                Target.GetComponent<InputFocusHelper>().ForceActivate();
            }
        }

        IEnumerator WaitTargetProcessEvent(Action callback)
        {
            yield return new WaitUntil(() => Target.isFocused);

            callback();
            if (null != Target.GetComponent<InputFocusHelper>())
            {
                Target.GetComponent<InputFocusHelper>().StorePositionInfo();
            }

            if (null != OnInputValueUpdated)
            {
                OnInputValueUpdated(Input);
            }
        }

        void SimulateKeyboardEvent(string s)
        {
            foreach (char c in s)
            {
                Event ev = Event.KeyboardEvent(""); //placeholder
                ev.character = c;
                Target.ProcessEvent(ev);
            }

            Target.ForceLabelUpdate();
        }
    }
}