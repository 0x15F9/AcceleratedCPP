#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// INPUT values
	cout << "Values: " << endl;
	double x; 		// temp variable
	vector<double> values;	// vector storing values
	while ( cin >> x )
	{
		values.push_back(x);
	}

	// PROCESS
	sort(values.begin(), values.end());	// sort values
	typedef vector<double>::size_type vec_sz;
	vec_sz size = values.size();		// number of items in vector
	vec_sz mid  = size / 2;
	double q1, q2, q3;

	// OUTPUT
		/////////////////////// A function should be used in here but i dunno how to make functions yet :/
	if ( size  % 2 == 0) 			// number of items is even
	{
		q2 = (values[mid] + values[mid - 1] ) / 2;
	} else { 				// number of items is odd
		q1 = 
		q2 = values[mid];
		q3 = 
	}
	cout << "Q1: " << q1 << endl
		<< "Q2: " << q2 << endl
		<< "Q3: " << q3 << endl;

	return 0;
}

