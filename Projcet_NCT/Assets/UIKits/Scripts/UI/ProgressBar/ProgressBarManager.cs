using System.Collections;
using UnityEngine;

namespace VRUiKits.Utils
{
    public class ProgressBarManager : MonoBehaviour
    {
        Coroutine slideCoroutine;
        public delegate void OnValueUpdatedHandler(float updatedValue);

        // The event which other objects can subscribe to
        // Uses the function defined above as its type
        public event OnValueUpdatedHandler OnValueIsUpdating;
        public event OnValueUpdatedHandler OnValueStopUpgating;
        public void IncreaseValue(float target, float step, float min, float max)
        {
            if (null != slideCoroutine)
            {
                StopCoroutine(slideCoroutine);
            }
            float to = Mathf.Clamp((target + step), min, max);
            slideCoroutine = StartCoroutine(SlideTo(target, to));
        }

        public void DecreaseValue(float target, float step, float min, float max)
        {
            if (null != slideCoroutine)
            {
                StopCoroutine(slideCoroutine);
            }
            float to = Mathf.Clamp((target - step), min, max);
            slideCoroutine = StartCoroutine(SlideTo(target, to));
        }

        IEnumerator SlideTo(float target, float toValue, float time = 0.2f)
        {
            float fromValue = target;
            float elapsedTime = 0f;

            while (elapsedTime < time)
            {
                elapsedTime += Time.deltaTime;
                target = Mathf.Lerp(fromValue, toValue, (elapsedTime / time));
                if (null != OnValueIsUpdating)
                {
                    OnValueIsUpdating(target);
                }
                yield return null;
            }

            if (null != OnValueStopUpgating)
            {
                OnValueStopUpgating(target);
            }
        }
    }
}