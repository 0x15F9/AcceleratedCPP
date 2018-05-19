#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	// Declaring variables
	int width, height; // Dimensions of rectangle
	cout << "Width of rectangle: ";
	cin >> width;
	cout << "Height of rectangle: ";
	cin >> height;

	string character; // Character which makes up the border
	cout << "Charater to use: ";
	cin >> character;

	for (int i=0; i < height ; ++i)
	{
		for (int j=0; j<width; ++j)
		{
			cout << character;
		}
		cout << endl;
	}
}
