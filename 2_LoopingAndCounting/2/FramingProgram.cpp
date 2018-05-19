#include <iostream>
#include <string>

// Say which standard libraries we are using
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	// Declaring Variables
	string name;

	// Asking for name
	cout << "First Name: ";
	cin >> name;

	// Leave a line
	cout << endl;

	// Creating the message string
	const string message = "Hello " + name + "!";

	// the number of blanks surrounding the greeting
	const int pad_x = 5; // Pad left and right
	const int pad_y = 2; // Pad top and bottom

	// the number of rows and columns to write
	const int rows = pad_y * 2 + 3; // 3 because 1 for message and 2 for frames
	const string::size_type cols = message.size() + pad_x * 2 + 2; // 2 for frames, pad x 2 for spacing

	// Start Writing
	for (int r = 0; r != rows; ++r)
	{
		string::size_type c = 0;
		while ( c != cols)
		{
			if (r == pad_y + 1 && c == pad_x + 1){
				cout << message;
				c += message.size();
			} else {
				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1){
					cout << "*";
				} else {
					cout << " ";
				}
				++c;
			}
		}
		cout << endl;
	}

	return 0;
}
