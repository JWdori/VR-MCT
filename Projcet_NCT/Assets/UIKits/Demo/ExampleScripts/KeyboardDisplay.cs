using UnityEngine;

namespace VRUiKits.Demo
{
    public class KeyboardDisplay : MonoBehaviour
    {
        public Transform vrCamera;
        Vector3 offset;

        void Awake()
        {
            offset = transform.position - vrCamera.position;
        }

        void OnEnable()
        {
            SetPosition();
        }

        void SetPosition()
        {
            transform.position = vrCamera.position + offset;
        }
    }
}