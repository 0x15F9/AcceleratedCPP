#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

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
	// num of grades read so far; sum
	int count = 0;
	double sum = 0;
	// temp variable to read values into
	double x;
	// Read:
	while (cin >> x){
		++count;
		sum += x;
	}

	// Return output
	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * sum / count
		<< setprecision(prec) << endl;

	return 0;
}
