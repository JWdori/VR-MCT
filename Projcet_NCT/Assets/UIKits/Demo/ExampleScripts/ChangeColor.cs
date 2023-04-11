using UnityEngine;

namespace VRUiKits.Demo
{
    public class ChangeColor : MonoBehaviour
    {
        Material material;
        Color color;
        bool isClicked = false;
        void Start()
        {
            material = GetComponent<MeshRenderer>().material;
        }

        public void PointerEnter()
        {
            color = material.color;
            material.color = Color.cyan;
            isClicked = false;
        }

        public void PointerLeave()
        {
            if (!isClicked)
            {
                material.color = color;
            }
        }

        public void PointerClick()
        {
            material.color = Color.blue;
            isClicked = true;
        }
    }
}
