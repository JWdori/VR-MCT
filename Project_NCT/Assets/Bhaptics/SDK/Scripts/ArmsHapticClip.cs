using Bhaptics.SDK2;
using UnityEngine;


namespace Bhaptics.Tact.Unity
{
    [System.Obsolete("No more updates. Use SDK2.")]
    public class ArmsHapticClip : FileHapticClip
    {
        [System.Obsolete("No more support. Use SDK2 and create the right and left events.")]
        public bool IsReflect;



        public override void Play(float intensity, float duration, float vestRotationAngleX, float vestRotationOffsetY, string identifier = "")
        {
            if (IsReflect)
            {
                BhapticsLogger.LogError("The IsReflect is no more supported. Use SDK2 and create the right and left events.");
            }

            BhapticsLibrary.PlayParam(EventName, duration, intensity, 0f, 0f);
        }

        public override void ResetValues()
        {
            base.ResetValues();
            IsReflect = false;
        }

    }
}