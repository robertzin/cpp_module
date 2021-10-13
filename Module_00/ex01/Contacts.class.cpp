#include "Phonebook.hpp"

void Contacts::search_contact( void )
{
	std::cout << std::setw(10) << index;
	std::cout << " | ";
	if (this->first_name.length() <= 10)
		std::cout << std::setw(10) << this->first_name;
	else 
		std::cout << std::setw(9) << this->first_name.substr(0, 9) << '.';
	std::cout << " | ";
	if (this->last_name.length() <= 10)
		std::cout << std::setw(10) << this->last_name;
	else 
		std::cout << std::setw(9) << this->last_name.substr(0, 9) << '.';
	std::cout << " | ";
	if (this->nickname.length() <= 10)
		std::cout << std::setw(10) << this->nickname;
	else 
		std::cout << std::setw(9) << this->nickname.substr(0, 9) << '.';
	std::cout << " | ";
	if (this->phone_number.length() <= 10)
		std::cout << std::setw(10) << this->phone_number;
	else 
		std::cout << std::setw(9) << this->phone_number.substr(0, 9) << '.';
	std::cout << " | ";
	if (this->darkest_secret.length() <= 10)
		std::cout << std::setw(10) << this->darkest_secret;
	else 
		std::cout << std::setw(9) << this->darkest_secret.substr(0, 9) << '.';
		std::cout << std::endl;
}

void Contacts::show_contact( void )
{
	std::cout << std::setw(20) << "First name: " << this->first_name << std::endl;
	std::cout << std::setw(20) << "Last name: " << this->last_name << std::endl;
	std::cout << std::setw(20) << "Nickname: " << this->nickname << std::endl;
	std::cout << std::setw(20) << "Phone number: " << this->phone_number << std::endl;
	std::cout << std::setw(20) << "Darkest secret: " << this->darkest_secret << std::endl;
}

void Contacts::add_contact( int i )
{
	index = i + 1;
	std::cout << "Your first name: ";
		if ((std::cin >> this->first_name) == '\0')
			exit(0);
	std::cout << "Your last name: ";
		if ((std::cin >> this->last_name) == '\0')
			exit(0);
	std::cout << "Your nickname: ";
		if ((std::cin >> this->nickname) == '\0')
			exit(0);
	std::cout << "Your phone number: ";
		if ((std::cin >> this->phone_number) == '\0')
			exit(0);
	std::cout << "Your darkest secret: ";
		if ((std::cin >> this->darkest_secret) == '\0')
			exit(0);
}