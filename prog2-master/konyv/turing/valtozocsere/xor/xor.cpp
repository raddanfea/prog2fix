#include <iostream>

using namespace std;

int main()
{
	int a=2;
	int b=3;
	cout << "a=" << a << " b=" << b << endl << endl;

	a=a^b;
	b=a^b;
	a=a^b;

	cout << "a=" << a << " b=" << b << endl;

	return 0;
}