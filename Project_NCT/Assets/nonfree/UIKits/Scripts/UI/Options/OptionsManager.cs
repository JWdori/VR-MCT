using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace VRUiKits.Utils
{
    public class OptionsManager : MonoBehaviour
    {
        [Header("Template")]
        public GameObject optionTemplate;
        [HideInInspector]
        public List<Option> optionsList = new List<Option>(); // Used to populate the options list
        public delegate void OnOptionSelectedHandler(int index);
        public event OnOptionSelectedHandler OnOptionSelected;
        [HideInInspector]
        public string selectedValue;
        public int firstSelectedIndex = 0;
        // The index of the selected <option> element in the options list (starts at 0)
        int selectedIdx = 0;
        List<OptionItem> optionItems = new List<OptionItem>();

        void Awake()
        {
            optionTemplate.SetActive(false);
            PopulateOptions();
        }

        void Start()
        {
            selectedIdx = Mathf.Clamp(firstSelectedIndex, 0, optionItems.Count - 1);
            ActivateOption(selectedIdx);
            OnOptionSelected += ActivateOption;
        }

        void PopulateOptions()
        {
            Transform parent = optionTemplate.transform.parent;

            for (int i = 0; i < optionsList.Count; i++)
            {
                OptionItem item = Instantiate(optionTemplate, parent).GetComponent<OptionItem>();
                item.Option = optionsList[i];
                item.Deactivate();
                optionItems.Add(item);
            }
        }

        public void PrevOption()
        {
            SetOption(selectedIdx - 1);
        }

        public void NextOption()
        {
            SetOption(selectedIdx + 1);
        }

        // SetOption at given index i
        public void SetOption(int i)
        {
            if (i >= 0 && i < optionItems.Count)
            {
                DeactivateOption(selectedIdx);
                selectedIdx = i;
                OnOptionSelected(i);
            }
        }

        void ActivateOption(int i)
        {
            if (i >= 0 && i < optionItems.Count)
            {
                optionItems[i].Activate();
                // Assign new selected value
                selectedValue = optionItems[i].Value;
            }
        }

        void DeactivateOption(int i)
        {
            if (i >= 0 && i < optionItems.Count)
            {
                optionItems[i].Deactivate();
            }
        }
    }
}
