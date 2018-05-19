#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	// Declaring variables
	int base; // Dimensions of rectangle
	cout << "Base of triangle: ";
	cin >> base;

	for (int j=1; j<base+1; ++j)
	{
		string line(j, '*');
		cout << line;
		cout << endl;
	}
}
