public class Liskov
{
	public static void main(String args[])
	{
		Program program;

		FlyingBird eagle = new FlyingBird();
		eagle.fly();

		Bird penguin = new Bird();
		penguin.fly();
	}
}