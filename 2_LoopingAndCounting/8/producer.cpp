#include <iostream>

using std::cout;
using std::endl;

int main()
{
	// Declaring variables
	int product = 1;

	for (int i=1; i<10; ++i)
	{
		product *= i;
	}
	cout << product << endl;
}
