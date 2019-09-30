class szulo
{
    private String sztring;
    public void setOsTulajdonsag(String sztring)
    {
        this.sztring = sztring;
    }
    public String getOsTulajdonsag()
    {
        return this.sztring;
    }
}
class gyerek extends szulo
{
    public String getNemSzuloTulajdonsag()
    {
        return "Nope.";
    }
}
public class Liskov
{
    public static void main(String[] args)
    {
        szulo szulominta = new gyerek();
        System.out.println("Liskov: " + szulominta.getNemSzuloTulajdonsag());
    }
}

