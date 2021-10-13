#include "FragTrap.hpp"

int	main( void ) {
	ClapTrap Englishman("ENG");
	ScavTrap French("FRA");
	FragTrap Polish("POL");

	std::cout << std::endl;
	std::cout << Englishman.getHitPoints() << std::endl;
	std::cout << Englishman.getEnergyPoints() << std::endl;
	std::cout << Englishman.getAttackDamage() << std::endl;

	std::cout << std::endl;
	std::cout << French.getHitPoints() << std::endl;
	std::cout << French.getEnergyPoints() << std::endl;
	std::cout << French.getAttackDamage() << std::endl;

	std::cout << std::endl;
	std::cout << Polish.getHitPoints() << std::endl;
	std::cout << Polish.getEnergyPoints() << std::endl;
	std::cout << Polish.getAttackDamage() << std::endl;

	std::cout << std::endl;
	Englishman.attack("T-1000");
	Englishman.takeDamage(5);
	Englishman.beRepaired(15);

	std::cout << std::endl;
	French.attack("T-1000");
	French.takeDamage(5);
	French.beRepaired(15);

	std::cout << std::endl;
	Polish.attack("T-1000");
	Polish.takeDamage(5);
	Polish.beRepaired(15);

	std::cout << std::endl;
	French.guardGate();
	
	std::cout << std::endl;
	Polish.highFivesGuys();
	
	std::cout << std::endl;
	return (0);
}