#include "Bureaucrat.hpp"

int	main(void) {
	try {
		Bureaucrat* guy1 = new Bureaucrat("Kek", 900);
		std::cout << *guy1 << std::endl;

	}
	catch( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try {
		Bureaucrat* guy2 = new Bureaucrat("Lol", 0);
		std::cout << *guy2 << std::endl;
	}
	catch( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try {
		Bureaucrat* guy3 = new Bureaucrat("Cheburek", 23);
		std::cout << *guy3 << std::endl;
	}
	catch( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}


	std::cout << std::endl;
	try {
		Bureaucrat* guy1 = new Bureaucrat("Kek", 1);
		std::cout << *guy1 << std::endl;
		guy1->incGrade();
		std::cout << *guy1 << std::endl;

	}
	catch( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Bureaucrat* guy2 = new Bureaucrat("Lol", 150);
		std::cout << *guy2 << std::endl;
		guy2->decGrade();
		std::cout << *guy2 << std::endl;
	}
	catch( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Bureaucrat* guy2 = new Bureaucrat("Lol", 100);
		std::cout << *guy2 << std::endl;
		guy2->decGrade();
		std::cout << *guy2 << std::endl;
	}
	catch( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}