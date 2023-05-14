using UnityEngine;

public class SettingsButton : MonoBehaviour
{
    public GameObject settingBGMMenu; // SettingBGMMenu �˾� ������Ʈ

    public void ToggleSettingBGMMenu()
    {
        if (settingBGMMenu != null)
        {
            if (settingBGMMenu.activeSelf)
            {
                settingBGMMenu.SetActive(false); // SettingBGMMenu �˾��� ��Ȱ��ȭ�մϴ�.
            }
            else
            {
                settingBGMMenu.SetActive(true); // SettingBGMMenu �˾��� Ȱ��ȭ�մϴ�.
            }
        }
    }
}

