using UnityEngine;
using UnityEngine.UI;

namespace VRUiKits.Utils
{
    public class TabItem : Item
    {
        public GameObject relatedPanel;

        public override void Activate()
        {
            base.Activate();

            if (null != relatedPanel)
            {
                if (!relatedPanel.activeSelf)
                {
                    relatedPanel.SetActive(true);
                }

                Canvas canvas = relatedPanel.GetComponent<Canvas>();
                if (null != canvas)
                {
                    canvas.enabled = true;
                }

                // Canvas group should block raycast when canvas is enabled
                ToggleCanvasGroupBlockRaycast(true);
            }
        }

        public override void Deactivate()
        {
            base.Deactivate();

            if (null != relatedPanel)
            {
                Canvas canvas = relatedPanel.GetComponent<Canvas>();

                if (null != canvas)
                {
                    canvas.enabled = false;
                }
                else
                {
                    relatedPanel.SetActive(false);
                }

                // Canvas group should not block raycast when canvas is disabled
                ToggleCanvasGroupBlockRaycast(false);
            }
        }

        private void ToggleCanvasGroupBlockRaycast(bool enabled)
        {
            CanvasGroup canvasGroup = relatedPanel.GetComponent<CanvasGroup>();
            if (null != canvasGroup)
            {
                canvasGroup.blocksRaycasts = enabled;
            }
        }
    }
}
