using UnityEngine;

public class SettingsButton : MonoBehaviour
{
    public GameObject settingBGMMenu; // SettingBGMMenu 팝업 오브젝트

    public void ToggleSettingBGMMenu()
    {
        if (settingBGMMenu != null)
        {
            if (settingBGMMenu.activeSelf)
            {
                settingBGMMenu.SetActive(false); // SettingBGMMenu 팝업을 비활성화합니다.
            }
            else
            {
                settingBGMMenu.SetActive(true); // SettingBGMMenu 팝업을 활성화합니다.
            }
        }
    }
}

