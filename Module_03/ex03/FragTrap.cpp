#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap() {
	std::cout << "[Coś] zostało stworzone jako instancja klasy FragTrap" << std::endl;
	this->_hitPoints = 20;
	this->_energyPoints = 20;
	this->_attackDamage = 20;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name) {
	std::cout << '[' << name << "] został stworzony jako instancja klasy FragTrap" << std::endl;
	this->_name = name;
	this->_hitPoints = 20;
	this->_energyPoints = 20;
	this->_attackDamage = 20;
}

FragTrap::~FragTrap( void ) {
	if (!(this->_name.empty()))
		std::cout << '[' << this->_name << "] został zniszczony jako instancja klasy FragTrap" << std::endl;
	else
		std::cout << "[Something] został zniszczony jako instancja klasy FragTrap" << std::endl;
}

FragTrap::FragTrap( const FragTrap& toCopy ) {
	*this = toCopy;
}

FragTrap& FragTrap::operator=( const FragTrap& value ) {
	std::cout << "[Something] został skopiowany jako instancja klasy FragTrap" << std::endl;
	this->_name = value._name;
	this->_hitPoints = value._hitPoints;
	this->_energyPoints = value._energyPoints;
	this->_attackDamage = value._attackDamage;
	return *this;
}

void FragTrap::highFivesGuys( void ) {
	if (!(this->_name.empty()))
		std::cout << '[' << this->_name << "] hej wy skórzane torby! Daj mi swoje palce! Daj mi swoje dłonie!" << std::endl;
	else
		std::cout << "[Something] hej wy skórzane torby! Daj mi swoje palce! Daj mi swoje dłonie!" << std::endl;
}
