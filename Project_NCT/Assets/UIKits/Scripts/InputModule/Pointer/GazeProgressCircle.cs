/***
 * Author: Yunhan Li
 * Any issue please contact yunhn.lee@gmail.com
 ***/

using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.EventSystems;

namespace VRUiKits.Utils
{
    public class GazeProgressCircle : MonoBehaviour
    {

        #region Public Variables
        public Image circle;
        #endregion

        #region Private Variables
        Coroutine fillCircle;
        UIKitInputModule m_inputModule;
        #endregion

        #region MonoBehaviour Callbacks
        void Start()
        {
            m_inputModule = FindObjectOfType<UIKitInputModule>();
            m_inputModule.OnGazeChanged += HandleProgressCircle;
        }
        #endregion

        #region Private Methods
        private void HandleProgressCircle(GameObject target)
        {
            if (null != fillCircle)
            {
                StopCoroutine(fillCircle);
            }
            ResetGazer();

            if (null != target)
            {
                fillCircle = StartCoroutine(FillCircle());
            }
        }
        private IEnumerator FillCircle()
        {
            // When the circle starts to fill, reset the timer.
            float timer = 0f;
            circle.fillAmount = 0f;

            yield return new WaitForSeconds(m_inputModule.delayTimeInSeconds);

            while (timer < m_inputModule.gazeTimeInSeconds)
            {
                timer += Time.deltaTime;
                circle.fillAmount = timer / m_inputModule.gazeTimeInSeconds;
                yield return null;
            }

            circle.fillAmount = 1f;
            ResetGazer();
        }

        // Reset the loading circle to initial.
        private void ResetGazer()
        {
            if (circle == null)
            {
                Debug.LogError("Please assign target loading image, (ie. circle image)");
                return;
            }

            circle.fillAmount = 0f;
        }
        #endregion
    }
}