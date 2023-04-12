using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace VRUiKits.Utils
{
    public class ListSelectionHelper : MonoBehaviour
    {
        public Transform list;
        public Item initialActivatedItem;
        [HideInInspector]
        public Item currentSelectedItem;
        Item[] items;

        void Awake()
        {
            items = list.GetComponentsInChildren<Item>();
        }

        void Start()
        {
            foreach (var item in items)
            {
                item.OnItemSelected += SelectionHelper;

                if (item == initialActivatedItem)
                {
                    item.button.onClick.Invoke();
                    currentSelectedItem = item;
                }
                else
                {
                    item.Deactivate();
                }
            }
        }

        void SelectionHelper(Item item)
        {
            DeselectCurrentItem();

            item.Activate();
            currentSelectedItem = item;
        }

        public void DeselectCurrentItem()
        {
            if (null != currentSelectedItem)
            {
                currentSelectedItem.Deactivate();
            }
            currentSelectedItem = null;
        }
    }
}
