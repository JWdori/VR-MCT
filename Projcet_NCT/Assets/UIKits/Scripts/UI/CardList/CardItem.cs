using UnityEngine;
using UnityEngine.UI;
using System;
#if UIKIT_TMP
using TMPro;
#endif

namespace VRUiKits.Utils
{
    [Serializable]
    public class Card
    {
        public string title;
        public string subtitle;
        public string description;
        public Sprite image;
    }

    public class CardItem : MonoBehaviour
    {
        public Transform title;
        public Transform subtitle;
        public Transform description;
        public delegate void OnCardClickedHandler(Card card);
        public event OnCardClickedHandler OnCardClicked;
#if UIKIT_TMP
        public TextMeshProUGUI Title
        {
            get
            {
                if (null != title)
                    return title.GetComponent<TextMeshProUGUI>();
                return null;
            }
        }

        public TextMeshProUGUI Subtitle
        {
            get
            {
                if (null != subtitle)
                    return subtitle.GetComponent<TextMeshProUGUI>();
                return null;
            }
        }

        public TextMeshProUGUI Description
        {
            get
            {
                if (null != description)
                    return description.GetComponent<TextMeshProUGUI>();
                return null;
            }
        }
#else
        public Text Title
        {
            get
            {
                if (null != title)
                    return title.GetComponent<Text>();
                return null;
            }
        }

        public Text Subtitle
        {
            get
            {
                if (null != subtitle)
                    return subtitle.GetComponent<Text>();
                return null;
            }
        }

        public Text Description
        {
            get
            {
                if (null != description)
                    return description.GetComponent<Text>();
                return null;
            }
        }
#endif
        public Image image;
        Card card;

        public Card Card
        {
            get
            {
                return card;
            }
            set
            {
                card = value;
                if (null != Title)
                {
                    Title.text = card.title;
                }

                if (null != Subtitle)
                {
                    Subtitle.text = card.subtitle;
                }

                if (null != Description)
                {
                    Description.text = card.description;
                }

                if (null != image)
                {
                    image.sprite = card.image;
                }
            }
        }

        public void Awake()
        {
            if (null != GetComponent<Button>())
            {
                GetComponent<Button>().onClick.AddListener(() =>
                {
                    OnCardClicked(card);
                });
            }
        }
    }
}