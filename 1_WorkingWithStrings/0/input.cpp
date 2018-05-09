// ask for a person's name, and greet the person
# include <iostream>
# include <string>

int main()
{
	std::cout<<"Hi! What is your name? ";
	std::string name;
	std::cin>>name;
	std::cout<<"Hello "<<name<<"! Nice to meet you."<<std::endl;
	return 0;
}
