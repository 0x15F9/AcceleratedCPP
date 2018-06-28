#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	// Ask for and read name
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	// Ask for and read midterm and final grade
	cout << "Please enter your midterm and final grade: ";
	double midterm, final;
	cin >> midterm >> final;

	// Ask for homework grades
	cout << "Enter all your homework grades followed by EOF: ";
	vector<double> homework;
	double x; // temp variable
	while (cin >> x)
	{
		homework.push_back(x);
	}
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0)
	{
		cout << endl << "You must enter your grades. Please try again. " << endl;
		return 1;
	}

	// sort grades
	sort(homework.begin(), homework.end());
	// Find the Median
	vec_sz mid = size/2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid-1]) / 2 : homework[mid] ;

	// Output
	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3) 
		<< 0.2 * midterm + 0.4 * final + 0.4 * median
		<< setprecision(prec) << endl;

	return 0;
}


