#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	// Declaring variables
	int first, second;

	// Fetching values
	cout << "Enter the values" << endl;
	cin >> first >> second;

	first > second ? cout << first : cout << second;
	cout << " is greater." << endl;
}
