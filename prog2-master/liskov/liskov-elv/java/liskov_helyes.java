public class liskov
{
public class Bird
{
public void fly()
	{
		System.out.println("This bird doesn't fly, silly!");
	};
};

public class Program
{
	public void function(Bird bird)
	{};
};

class FlyingBird extends Bird
{
	public void fly()
	{ 
		System.out.println("This bird flies!");
	};
};

class Eagle extends FlyingBird
{};

class Penguin extends Bird
{};

public static void main(String args[])
{
	Program program;

	Eagle eagle;
	eagle.fly();

	Penguin penguin;
	penguin.fly();
}
}