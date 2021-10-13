#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	std::cout << "Come with me if you wanna live" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : 
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0) {
	std::cout << '[' << this->_name << "]: I need your clothes, your boots and your motorcycle" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& toCopy ) {
	*this = toCopy;
}

ClapTrap::~ClapTrap( void ) {
	if (!(this->_name.empty()))
		std::cout << '[' << this->_name << "]: I’ll Be Back" << std::endl;
	else 
		std::cout << "I’ll Be Back" << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& value ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_name = value._name;
	this->_hitPoints = value._hitPoints;
	this->_energyPoints = value._energyPoints;
	this->_attackDamage = value._attackDamage;
	return *this;
}

std::string ClapTrap::getName( void ) const {
	return this->_name;
}

int ClapTrap::getHitPoints( void ) const {
	return this->_hitPoints;
}

int ClapTrap::getEnergyPoints( void ) const {
	return this->_energyPoints;
}

int ClapTrap::getAttackDamage( void ) const {
	return this->_attackDamage;
}

void ClapTrap::setName( std::string const name ) {
	this->_name = name;
}

void ClapTrap::attack( std::string const& target ) {
	std::cout << "You will be Terminated, F****R!" << std::endl;
	std::cout << '[' << this->_name << "] attacks " << target << " and causes a " << this->_attackDamage << " damage" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	std::cout << "Cyborgs don't feel pain. I do. Don't do that again" << std::endl;
	std::cout << '[' << this->_name << "] gets damage of " << amount << std::endl;
	if ((this->_energyPoints - amount) > 4200000000) {
		this->_energyPoints = 0;
	}
	else
		this->_energyPoints -= amount;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	std::cout << "Pain can be controlled - you just disconnect it" << std::endl;
	std::cout << '[' << this->_name << "] heals " << amount << " HP" << std::endl;
	this->_energyPoints += amount;
}