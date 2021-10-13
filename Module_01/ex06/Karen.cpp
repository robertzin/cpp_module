#include "Karen.hpp"

void Karen::debug( void ) {
	std::cout << "[ DEBUG ]\nI love to get extra bacon for my" 
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger."
				<< "I just love it!" << std::endl;
	return;
}

void Karen::info( void ) {
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon cost more money."
				<< "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	return;
}

void Karen::warning( void ) {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free."
				<< "I’ve been coming here for years and you just started working here last month." << std::endl;
	return;
}

void Karen::error( void ) {
	std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
	return;
}

void Karen::complain( std::string level ) {
	void (Karen::*ptr_func)( void ) = NULL;
	char choice;

	choice = level[0];

	switch (choice) {
		case 'D':
			ptr_func = &Karen::debug;
			(this->*ptr_func)();
			std::cout << std::endl;
		case 'I':
			ptr_func = &Karen::info;
			(this->*ptr_func)();
			std::cout << std::endl;
		case 'W':
			ptr_func = &Karen::warning;
			(this->*ptr_func)();
			std::cout << std::endl;
		case 'E':
			ptr_func = &Karen::error;
			(this->*ptr_func)();
			std::cout << std::endl;
	}
	return;
}
