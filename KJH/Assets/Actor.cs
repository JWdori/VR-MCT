
public class Actor
{
    public int id;
    public string name;
    public string weapon;
    public string title;
    public float stregnth;
    public int level;

    public string Talk()
    {
        return "��ȭ�� �ɾ����ϴ�.";
    }

    public string Hasweapon()
    {
        return weapon;
    }

    public void LevelUp()
    {
        level = level + 1;
    }
}
