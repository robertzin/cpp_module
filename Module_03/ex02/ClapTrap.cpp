#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	std::cout << "[Something] was created as a ClapTrap class instance" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name) {
	std::cout << '[' << this->_name << "] was created as a ClapTrap class instance" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap& toCopy ) {
	*this = toCopy;
}

ClapTrap::~ClapTrap( void ) {
	if (!(this->_name.empty()))
		std::cout << '[' << this->_name << "] was destructed as a ClapTrap class instance" << std::endl;
	else
		std::cout << "[Something] was destructed as a ClapTrap class instance" << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& value ) {
	std::cout << "[Something] was copied as a ClapTrap class instance" << std::endl;
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

void ClapTrap::setHitPoints( unsigned int const amount ) {
	this->_hitPoints = amount;
}

void ClapTrap::setEnergyPoints( unsigned int const amount ) {
	this->_energyPoints = amount;
}

void ClapTrap::setAttackDamage( unsigned int const amount ) {
	this->_attackDamage = amount;
}

void ClapTrap::attack( std::string const& target ) {
	std::cout << '[' << this->_name << "] attacks " << target << " as a ClapTrap class instance"
				<< " and causes a " << this->_attackDamage << " damage" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	std::cout << '[' << this->_name << "] gets damage of " << amount
				<< " as a ClapTrap class instance" << std::endl;
	this->_energyPoints -= amount;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	std::cout << '[' << this->_name << "] heals " << amount << " HP"
				<< " as a ClapTrap class instance" << std::endl;
	this->_energyPoints += amount;
}