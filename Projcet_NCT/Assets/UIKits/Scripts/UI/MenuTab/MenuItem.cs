using UnityEngine;
using UnityEngine.UI;

namespace VRUiKits.Utils
{
    public class MenuItem : Item
    {
        public GameObject subMenu;

        public override void Activate()
        {
            base.Activate();

            if (null != subMenu)
            {
                subMenu.SetActive(true);
            }
        }

        public override void Deactivate()
        {
            base.Deactivate();

            if (null != subMenu && subMenu.activeInHierarchy)
            {
                subMenu.SetActive(false);
            }
        }

        void OnDisable()
        {
            Deactivate();
        }
    }
}
