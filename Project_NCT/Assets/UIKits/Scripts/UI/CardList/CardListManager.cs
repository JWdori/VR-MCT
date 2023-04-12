using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace VRUiKits.Utils
{
    public class CardListManager : MonoBehaviour
    {
        #region Public Variables
        public Transform listContent;
        public GameObject itemTemplate;
        [HideInInspector]
        // cardList contains a list of card information such as title, subtitle, image, and etc.
        public List<Card> cardList = new List<Card>();
        [HideInInspector]
        public Card selectedCard;
        #endregion

        #region Private Variables
        // cardItems is a list of card displayed in the UI
        List<CardItem> cardItems = new List<CardItem>();
        #endregion

        #region Monobehaviour Callbacks
        void Awake()
        {
            itemTemplate.SetActive(false);
            PopulateList();
        }
        #endregion

        #region Public Methods
        // Clear all the cards in the cardList
        public void Reset()
        {
            foreach (CardItem _item in cardItems)
            {
                Util.SafeDestroyGameObject(_item);
            }
            cardItems.Clear();
            cardList.Clear();
        }

        // Populate cards from the cardList
        public void PopulateList()
        {
            for (int i = 0; i < cardList.Count; i++)
            {
                DrawCardItem(cardList[i]);
            }
        }

        // Add a new card to the cardList and draw it in the UI
        public void AddCardItem(Card card)
        {
            cardList.Add(card);
            DrawCardItem(card);
        }
        #endregion

        #region Private Methods
        // Draw the card item in the UI using the card information
        void DrawCardItem(Card card)
        {
            CardItem item = Instantiate(itemTemplate, listContent).GetComponent<CardItem>();
            item.Card = card;
            item.gameObject.SetActive(true);
            cardItems.Add(item);
            item.OnCardClicked += SetSelectedCard;
        }

        void SetSelectedCard(Card card)
        {
            selectedCard = card;
        }
        #endregion
    }
}
