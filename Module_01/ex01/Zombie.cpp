#include "Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << "Zombie was born :)" << std::endl;
	return;
}

Zombie::~Zombie ( void ) {
	std::cout << this->_name << " died :(" << std::endl;
	return;
}

std::string	Zombie::getName ( void ) const{
	return this->_name;
}

void Zombie::setName ( std::string name) {
	_name = name;
	return;
}

void Zombie::announce ( void ) const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}