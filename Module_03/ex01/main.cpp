#include "ScavTrap.hpp"

int	main( void ) {
	ClapTrap Englishman("ENG");
	std::cout << std::endl;
	ScavTrap French("FRA");
	std::cout << std::endl;
	ScavTrap RUS = French;
	std::cout << std::endl;
	ScavTrap BEL("BEL");

	// std::cout << Englishman.getHitPoints() << std::endl;
	// std::cout << Englishman.getEnergyPoints() << std::endl;
	// std::cout << Englishman.getAttackDamage() << std::endl;

	// std::cout << French.getHitPoints() << std::endl;
	// std::cout << French.getEnergyPoints() << std::endl;
	// std::cout << French.getAttackDamage() << std::endl;

	// std::cout << RUS.getHitPoints() << std::endl;
	// std::cout << RUS.getEnergyPoints() << std::endl;
	// std::cout << RUS.getAttackDamage() << std::endl;

	std::cout << std::endl;
	Englishman.attack("T-1000");
	Englishman.takeDamage(5);
	Englishman.beRepaired(15);

	std::cout << std::endl;
	French.attack("T-1000");
	French.takeDamage(5);
	French.beRepaired(15);

	std::cout << std::endl;
	RUS.attack("T-1000");
	RUS.takeDamage(5);
	RUS.beRepaired(15);

	std::cout << std::endl;
	BEL.attack("T-1000");
	BEL.takeDamage(5);
	BEL.beRepaired(15);

	std::cout << std::endl;
	BEL.guardGate();

	std::cout << std::endl;
	return (0);
}