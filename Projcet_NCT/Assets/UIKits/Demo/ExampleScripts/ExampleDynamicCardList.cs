using UnityEngine;
using VRUiKits.Utils;

public class ExampleDynamicCardList : MonoBehaviour
{
    public CardListManager clm;
    void Start()
    {
        UpdateList();
    }

    public void UpdateList()
    {
        // If you need to clear the cardlist, call clm.Reset()
        clm.Reset();

        for (int i = 0; i <= 5; i++)
        {
            Card card = new Card();
            card.title = "Test " + i.ToString();
            // AddCardItem will add the card to the cardList and draw it in the UI
            clm.AddCardItem(card);
        }
    }
}
