using UnityEngine;

namespace VRUiKits.Demo
{
    public class FaceVRCamera : MonoBehaviour
    {
        public Transform vrCamera;
        public FaceCameraType type;
        float distance;

        void Awake()
        {
            distance = transform.position.z - vrCamera.position.z;
        }

        void OnEnable()
        {
            if (type == FaceCameraType.OnToggle)
            {
                CalibratePosition();
            }
        }

        void LateUpdate()
        {
            if (type == FaceCameraType.Always)
            {
                CalibratePosition();
            }
        }

        void CalibratePosition()
        {
            transform.position = vrCamera.position + vrCamera.forward * distance;
            transform.rotation = Quaternion.LookRotation(transform.position - vrCamera.transform.position);
        }
    }

    public enum FaceCameraType
    {
        Always,
        OnToggle,
    }
}
