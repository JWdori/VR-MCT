using Bhaptics.SDK2;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace Bhaptics.Tact.Unity
{
    [System.Obsolete("No more updates. Use SDK2.")]
    [CreateAssetMenu(fileName = "SimpleHapticClip", menuName = "bHaptics/[Deprecated] Create Simple HapticClip")]
    public class SimpleHapticClip : HapticClip
    {
        [SerializeField] private HapticClipPositionType Position = HapticClipPositionType.VestFront;

        [SerializeField] private SimpleHapticType Mode = SimpleHapticType.DotMode;

        [SerializeField] private int[] DotPoints = new int[20];

        [SerializeField] private Point[] Points = { new Point(0.5f, 0.5f, 100) };

        [Range(20, 10000)] public int TimeMillis = 1000;





        public override void Play(float intensity, float duration, float vestRotationAngleX, float vestRotationOffsetY, string identifier = "")
        {
            if (Mode == SimpleHapticType.DotMode)
            {
                BhapticsLibrary.PlayMotors(ToDeviceIndex(Position), Convert(DotPoints), TimeMillis);
            }
            else
            {
                // NOTE-220809      PathMode도 지원하면 추가할 것
                BhapticsLogger.LogError("The PathMode is not yet supported. Please wait for new update.");
                //haptic.Submit(keyId + identifier, BhapticsUtils.ToPositionType(Position), Convert(Points), TimeMillis);
            }
        }

        public override void ResetValues()
        {
            base.ResetValues();

            DotPoints = new int[20];

            Points = new Point[] { new Point(0.5f, 0.5f, 100) };

            TimeMillis = 1000;

            Position = HapticClipPositionType.VestFront;
        }







        private int[] Convert(int[] points)
        {
            var result = new int[40];

            for (int i = 0; i < points.Length; ++i)
            {
                if (Position == HapticClipPositionType.VestBack)
                {
                    result[i + 20] = points[i];
                }
                else
                {
                    result[i] = points[i];
                }
            }

            return result;
        }

        private int ToDeviceIndex(HapticClipPositionType type)
        {
            switch (type)
            {
                case HapticClipPositionType.Head:
                    return 3;
                case HapticClipPositionType.VestFront:
                    return 0;
                case HapticClipPositionType.VestBack:
                    return 0;
                case HapticClipPositionType.LeftForearm:
                    return 1;
                case HapticClipPositionType.RightForearm:
                    return 2;
                case HapticClipPositionType.LeftHand:
                    return 4;
                case HapticClipPositionType.RightHand:
                    return 5;
                case HapticClipPositionType.LeftFoot:
                    return 6;
                case HapticClipPositionType.RightFoot:
                    return 7;
                case HapticClipPositionType.LeftGlove:
                    return 8;
                case HapticClipPositionType.RightGlove:
                    return 9;
            }

            return 0;
        }

        private static List<PathPoint> Convert(Point[] points)
        {
            var result = new List<PathPoint>();

            foreach (var point in points)
            {
                result.Add(new PathPoint(point.X, point.Y, point.Intensity));
            }

            return result;
        }
    }

    [System.Obsolete("No more updates. Use SDK2.")]
    [Serializable]
    public class Point
    {
        [Range(0, 1f)] public float X;
        [Range(0, 1f)] public float Y;

        [Range(0, 100)] public int Intensity;

        public Point(float x, float y, int intensity)
        {
            X = x;
            Y = y;
            Intensity = intensity;
        }
    }

    [System.Obsolete("No more updates. Use SDK2.")]
    [Serializable]
    public enum SimpleHapticType
    {
        DotMode = 1,
        PathMode = 2
    }
}