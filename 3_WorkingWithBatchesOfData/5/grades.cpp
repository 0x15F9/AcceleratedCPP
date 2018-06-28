#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	vector<string> names;
	vector<double> marks;
	double mark;
	string name;
	
	cout << "Name: (EOF to quit) ";
	while (cin >> name)
	{
		names.push_back(name);

		cout << "Mark obtained by " << name << ": ";
		cin >> mark;
		marks.push_back(mark);
		cout << endl;

		cout << "Name: (EOF to quit) ";
	}

	typedef vector<string>::size_type vec_sz;
	vec_sz size = names.size();

	cout << endl << endl;
	for (int i = 0 ; i < size; ++i)
	{
		cout << "  - " << names[i] << " has obtained "  << marks[i]
		<< " points." << endl;
	}

	return 0;
}

