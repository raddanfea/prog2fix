#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
	cout.precision(30);
	long double precision;
	long double pi = 0;

	cout << "Enter the precision:\n";
	cin >> precision;

	for(int i = 1;i<=precision;i++)
	{
		pi += 1/(pow(16,i))*((4/(8*i+1))-(2/(8*i+4))-(1/(8*i+5))-(1/(8*i+6)));
		cout << pi << endl;
	}

    system("pause");
    return 0;

}