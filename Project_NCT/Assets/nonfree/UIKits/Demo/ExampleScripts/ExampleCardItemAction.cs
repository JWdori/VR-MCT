using UnityEngine;
using UnityEngine.UI;
using VRUiKits.Utils;
#if UIKIT_TMP
using TMPro;
#endif

public class ExampleCardItemAction : MonoBehaviour
{
    public Transform title;
    public Transform description;

#if UIKIT_TMP
    TextMeshProUGUI titleText, descriptionText;
#else
    Text titleText, descriptionText;
#endif

    void Awake() {
#if UIKIT_TMP
    if (null != title)
        titleText = title.GetComponent<TextMeshProUGUI>();

    if (null != description)
        descriptionText = description.GetComponent<TextMeshProUGUI>();
#else
    if (null != title)
        titleText = title.GetComponent<Text>();

    if (null != description)
        descriptionText = description.GetComponent<Text>();
#endif
    }


    void Start() {
        // Subscribing to OnCardClick method
        GetComponent<CardItem>().OnCardClicked += ShowDescription;
    }

    void ShowDescription(Card card) {
        if (null != titleText)
            titleText.text = card.title;

        if (null != descriptionText)
            descriptionText.text = card.description;
    }
}
