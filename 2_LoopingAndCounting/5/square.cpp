#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	// Declaring variables
	int base; // Base of square
	cout << "Width of square: ";
	cin >> base;

	string character; // Character which makes up the border
	cout << "Charater to use: ";
	cin >> character;

	for (int i=0; i < base ; ++i)
	{
		for (int j=0; j<base; ++j)
		{
			cout << character;
		}
		cout << endl;
	}
}
