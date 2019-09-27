#include <iostream>

int main()
{
	int a=1;
	int i;

	while(a!=0)
	{
		a <<= 1;
		i++;
	}

	std::cout << "int: " << i << std::endl;


	return 0;
}