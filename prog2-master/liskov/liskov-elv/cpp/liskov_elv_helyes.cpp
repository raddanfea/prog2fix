#include <iostream>

class Bird
{
public:
	virtual void fly()
	{
		std::cout << "This bird doesn't fly, silly!\n";
	};
};

class Program
{
	public:
	void function(Bird &bird)
	{};
};

class FlyingBird : public Bird
{
public:
	virtual void fly()
	{ 
		std::cout << "This bird flies!\n";
	};
};

class Eagle : public FlyingBird
{};

class Penguin : public Bird
{};

int main(int argc, char **argv)
{
	Program program;

	Eagle eagle;
	eagle.fly();

	Penguin penguin;
	penguin.fly();
}