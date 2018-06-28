#include <vector>
#include <iostream>

using namespace std;

int main()
{
	// INPUT
	cout << "Enter words followed by EOF" << endl;
	string x;		// temp variable
	vector<string> unique_vector;
	typedef vector<string>::size_type vec_sz;
	vec_sz size;
	while (cin >> x)
	{
		bool present = false;
		size = unique_vector.size();
		for (int i = 0; i < size; i++)
		{
			if (unique_vector[i] == x) present = true;
		}
		if (!present) unique_vector.push_back(x);
	}

	cout << "Number of distinct words: " << size << endl;

	return 0;
}
