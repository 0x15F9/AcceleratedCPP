#include <iostream>
#include <string>

// Using
using std::string;
using std::cin;
using std::cout;
using std::endl;

// Main
int main()
{
	// Getting  variables
	string name;
	cout << "First Name: ";
	cin >> name;

	int pad;
	cout << "Spacing between frame and message: ";
	cin >> pad;

	// Leave a line
	cout << endl;

	// Generate Message and get its length
	const string message = "Hello " + name + "!";	

	// Get required sizes
	string::size_type message_size = message.size();
	const int rows = pad * 2 + 3; 
	const int cols = pad * 2 + 2 + message_size;

	// Output
	// Printing rows
	for (int r=0; r < rows; ++r)
	{
		string::size_type c = 0;
		while (c != cols)
		{
			if(r == pad + 1 && c == pad + 1)
			{
				cout << message;
				c += message_size;
			} else {
	 			if (r ==0 || r == rows - 1 || c == 0 ||
					 c == cols - 1){
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
