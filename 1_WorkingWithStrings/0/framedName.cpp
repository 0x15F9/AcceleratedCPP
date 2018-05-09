// ask for a person's name, and generate a framed greeting

#include <iostream>
#include <string>

int main()
{
	// Ask for name
	std::cout<<"Hi! What is your name? ";
	// Store name in a variable
	std::string name;
	std::cin>>name;
	// Generate message to output
	std::string message = "* Hello "+name+" *";
	// Get required number of blank spaces
	std::string spaces(message.size()-4, ' ');
	// generate second line of stars and blanks
	std::string second = "* " + spaces + " *";
	// generate first line of stars
	std::string first(second.size(), '*');
	// print it all
	std::cout<<first<<std::endl<<second<<std::endl;
	std::cout<<message<<std::endl;
	std::cout<<second<<std::endl<<first<<std::endl;

	return 0;
}
