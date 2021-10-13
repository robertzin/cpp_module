#include "ClapTrap.hpp"

int	main( void ) {
	ClapTrap Terminator("Cyberdyne Systems Model 101");
	ClapTrap T100("T-1000");

	Terminator.attack("T-1000");

	std::cout << Terminator.getEnergyPoints() << std::endl;
	Terminator.takeDamage(500);
	std::cout << Terminator.getEnergyPoints() << std::endl;
	Terminator.beRepaired(15);
	std::cout << Terminator.getEnergyPoints() << std::endl;

	return (0);
}