#include <iostream>
#include <unistd.h>

int main()
{
	fork();
	fork();
	for(;;)
	{}
	return 0;
}
