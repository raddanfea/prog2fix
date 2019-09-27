#include <iostream>

using namespace std;

int main()
{
	int input;
	cout << "Type in the number you would like to convert to unary " << endl;
	cin >> input;
	cout << "The unary encoding of " << input << " is: " << endl;
	if (input<0)
	{
		cout << "-";
		for(int i=input;i<0;i++)
			{
				cout << '1';
			}
	}
	else
	for(int i=0;i<input;i++)
	{
		cout << '1';
	}
	cout << 0 << endl;

	return 0;
}