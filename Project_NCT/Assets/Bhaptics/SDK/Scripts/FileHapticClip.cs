using Bhaptics.SDK2;
using UnityEngine;

namespace Bhaptics.Tact.Unity
{
    [System.Obsolete("No more updates. Use SDK2.")]
    public class FileHapticClip : HapticClip
    {
        [Tooltip("Value applied by multiplying")]
        [Range(0.2f, 5f)] public float Intensity = 1f;
        [Tooltip("Value applied by multiplying")]
        [Range(0.2f, 5f)] public float Duration = 1f;

        public HapticDeviceType ClipType;
        public string JsonValue;

        [SerializeField] protected int _clipDurationTime = -1;

        // NOTE-220809      eventName으로 Duration 가져오는거 되면 수정할 것
        public int ClipDurationTime
        {
            get
            {
                if (_clipDurationTime <= -1)
                {
                    _clipDurationTime = CalculateClipDutationTime(HapticFeedbackFile.ToHapticFeedbackFile(JsonValue));
                    return _clipDurationTime;
                }
                return _clipDurationTime;
            }
        }




        #region Play method
        public override void Play()
        {
            Play(Intensity, Duration, 0f, 0f, "");
        }

        public override void Play(string identifier)
        {
            Play(Intensity, Duration, 0f, 0f, identifier);
        }

        public override void Play(float intensity, string identifier = "")
        {
            Play(intensity, Duration, 0f, 0f, identifier);
        }

        public override void Play(float intensity, float duration, string identifier = "")
        {
            Play(intensity, duration, 0f, 0f, identifier);
        }

        public override void Play(float intensity, float duration, float vestRotationAngleX, string identifier = "")
        {
            Play(intensity, duration, vestRotationAngleX, 0f, identifier);
        }

        public override void Play(Vector3 contactPos, Collider targetCollider, string identifier = "")
        {
            Play(contactPos, targetCollider.bounds.center, targetCollider.transform.forward, targetCollider.bounds.size.y, identifier);
        }

        public override void Play(Vector3 contactPos, Vector3 targetPos, Vector3 targetForward, float targetHeight, string identifier = "")
        {
            Vector3 targetDir = contactPos - targetPos;
            var angle = BhapticsUtils.Angle(targetDir, targetForward);
            var offsetY = (contactPos.y - targetPos.y) / targetHeight;

            Play(this.Intensity, this.Duration, angle, offsetY, identifier);
        }

        public override void Play(float intensity, float duration, float vestRotationAngleX, float vestRotationOffsetY, string identifier = "")
        {
            BhapticsLibrary.PlayParam(EventName, duration, intensity, 0f, 0f);
        }
        #endregion

        public override void ResetValues()
        {
            base.ResetValues();
            Intensity = 1f;
            Duration = 1f;
        }





        private int CalculateClipDutationTime(HapticFeedbackFile hapticFeedbackFile)
        {
            int res = 0;
            if (hapticFeedbackFile != null)
            {
                foreach (var track in hapticFeedbackFile.Project.Tracks)
                {
                    foreach (var effect in track.Effects)
                    {
                        var effectTime = effect.StartTime + effect.OffsetTime;
                        if (res < effectTime)
                        {
                            res = effectTime;
                        }
                    }
                }
            }
            return res;
        }
    }
}