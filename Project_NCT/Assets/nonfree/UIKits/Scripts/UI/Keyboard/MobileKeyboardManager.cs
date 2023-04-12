/***
 * Author: Yunhan Li
 * Any issue please contact yunhn.lee@gmail.com
 ***/

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections.Generic;

namespace VRUiKits.Utils
{
    public class MobileKeyboardManager : MonoBehaviour
    {
        #region Public Variables
        [Header("User defined")]
        [Tooltip("If the character is uppercase at the initialization")]
        public bool isUppercase = false;

        [Header("Essentials")]
        public Transform keys;
        public static UIKitInputField Target
        {
            get
            {
                var _this = EventSystem.current.currentSelectedGameObject;

                if (null != _this && null != _this.GetComponent<UIKitInputField>())
                {
                    return _this.GetComponent<UIKitInputField>();
                }

                if (null != target)
                {
                    return target;
                }

                return null;
            }
            set
            {
                target = value;
            }
        }
        #endregion

        #region Private Variables
        /*
         Record a helper target for some 3rd party packages which lost focus when
         user click on keyboard.
         */
        private static UIKitInputField target;
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
                // Force target input field activated if losing selection
                EventSystem.current.SetSelectedGameObject(Target.gameObject);
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
            if (Input.Length > 0)
            {
                Input = Input.Remove(Input.Length - 1);
            }
            else
            {
                return;
            }
        }

        public void Clear()
        {
            Input = "";
            if (null != Target)
            {
                Target.ForceCaretUpdate();
            }
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
            Input += s;
        }
        #endregion
    }
}
