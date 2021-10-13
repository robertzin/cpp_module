#include <iostream>

int	main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Displaying the address in memory of the string: ";
	std::cout << &str << std::endl;

	std::cout << "Displaying the address in memory using stringPTR: ";
	std::cout << stringPTR << std::endl;
	
	std::cout << "Displaying the address in memory using stringREF: ";
	std::cout << &stringREF << std::endl;

	std::cout << std::endl << "Displaying the string using stringPTR: ";
	std::cout << *stringPTR << std::endl;

	std::cout << "Displaying the string using stringREF: ";
	std::cout << stringREF << std::endl;
	return (0);
}