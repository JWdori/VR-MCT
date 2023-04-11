using UnityEngine;

namespace VRUiKits.Demo
{
    public class MouseLook : MonoBehaviour
    {
        public float speed = 3.5f;
        private float x;
        private float y;

        void Update()
        {
            if (Input.GetMouseButton(0))
            {
                transform.Rotate(new Vector3(Input.GetAxis("Mouse Y") * speed, -Input.GetAxis("Mouse X") * speed, 0));
                x = transform.rotation.eulerAngles.x;
                y = transform.rotation.eulerAngles.y;
                transform.rotation = Quaternion.Euler(x, y, 0);
            }
        }
    }
}
