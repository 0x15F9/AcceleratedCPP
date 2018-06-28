#include <iostream>

using namespace std;

int main()
{
	int longest = 0;
	int shortest = 10000;
	string longest_word, shortest_word;


	typedef string::size_type str_sz;
	str_sz size;
	string x;

	cout << "Enter words followed by EOF: " << endl;
	while (cin >> x)
	{
		size = x.size();
		if (size > longest) 
		{
			longest = size;
			longest_word = x;
		}
		if (size < shortest)
		{
			shortest = size;
			shortest_word = x;
		}
	}

	cout << "The longest word is " << longest_word 
		<< " and has length " << longest << endl
		<< " and the shortest word is " << shortest_word
		<< " and has length " << shortest << "." << endl;

	return 0;
}
