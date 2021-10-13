#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap() {
	std::cout << "[Something] a été créé en tant qu'instance de classe ScavTrap" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 10;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name) {
	std::cout << '[' << name << "] a été créé en tant qu'instance de classe ScavTrap" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 10;
}

ScavTrap::~ScavTrap( void ) {
	if (!(this->_name.empty()))
		std::cout << '[' << this->_name << "] a été détruit en tant qu'instance de classe ScavTrap" << std::endl;
	else
		std::cout << "[Something] a été détruit en tant qu'instance de classe ScavTrap" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& toCopy ) {
	*this = toCopy;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& value ) {
	std::cout << "[Something] a été copié en tant qu'instance de classe ScavTrap" << std::endl;
	this->_name = value._name;
	this->_hitPoints = value._hitPoints;
	this->_energyPoints = value._energyPoints;
	this->_attackDamage = value._attackDamage;
	return *this;
}

void ScavTrap::attack( std::string const& target ) {
	std::cout << '[' << this->_name << "] attaques " << target << " en tant qu'instance de classe ScavTrap"
				<< " et provoque un " << this->_attackDamage << " dommage" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << '[' << this->_name <<  "] est entré en mode gardien de porte" << std::endl;
}