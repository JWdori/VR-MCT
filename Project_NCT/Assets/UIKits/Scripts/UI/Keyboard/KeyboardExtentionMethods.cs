/***
 * Author: Yunhan Li
 * Any issue please contact yunhn.lee@gmail.com
 ***/

using UnityEngine;
using UnityEngine.UI;

namespace VRUiKits.Utils
{
    public class KeyboardExtentionMethods : MonoBehaviour
    {
        public GameObject symbols;
        public GameObject alphabets;

        void Awake()
        {
            if (null == symbols || null == alphabets)
            {
                Debug.LogError("Please assign Symbols and Alphabets game objects");
                return;
            }

            // Set Alphabets active at the initial.
            symbols.SetActive(false);
            alphabets.SetActive(true);
        }

        public void SwitchSymbols()
        {
            ToggleObject(symbols);
            ToggleObject(alphabets);
        }

        public void ToggleObject(GameObject go)
        {
            if (go.activeSelf)
            {
                go.SetActive(false);
            }
            else
            {
                go.SetActive(true);
            }
        }
    }
}