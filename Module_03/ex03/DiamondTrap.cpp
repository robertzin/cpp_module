#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap(), _name("Something") {
	std::cout << "[Что-то] было создано, как класс DiamondTrap" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	ClapTrap::_name += "_clap_name";
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name + "_clap_name"), _name(name) {
	// std::cout << this->_hitPoints << std::endl;
	// std::cout << "C: " << ClapTrap::getHitPoints() << " " << ClapTrap::getAttackDamage() << " " << ClapTrap::getEnergyPoints() << std::endl;
	// std::cout << "S: " << ScavTrap::getHitPoints() << " " << ScavTrap::getAttackDamage() << " " << ScavTrap::getEnergyPoints() << std::endl;
	// std::cout << "F: " << FragTrap::getHitPoints() << " " << FragTrap::getAttackDamage() << " " << FragTrap::getEnergyPoints() << std::endl;
	this->_hitPoints = ClapTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << '[' << name << "] был создан, как класс DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
	if (!_name.empty())
		std::cout << '[' << _name << "] было уничтожено, как класс DiamondTrap" << std::endl;
	else
		std::cout << "[Что-то] было уничтожено, как класс DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& toCopy ) {
	*this = toCopy;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& value ) {
	std::cout << "[Что-то] было скопировано, как класс DiamondTrap" << std::endl;
	ScavTrap::operator=(value);
	return *this;
}

void DiamondTrap::whoAmI() {
		std::cout << "Меня зовут: " << this->_name << std::endl;	
		std::cout << "Имя моего пра-пра-пра родителя: " << ClapTrap::getName() << std::endl;
}
