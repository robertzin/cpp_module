#include "DiamondTrap.hpp"

int	main( void ) {
	ClapTrap	C("C");
	std::cout << std::endl;
	ScavTrap	S("S");
	std::cout << std::endl;
	FragTrap	F("F");
	std::cout << std::endl;
	DiamondTrap D("D");

	std::cout << std::endl;
	std::cout << "_name: " << C.getName() << " " << S.getName() << " " << F.getName() << " " << D.getName() <<  std::endl;

	std::cout << std::endl;
	std::cout << "C: " << C.getHitPoints() << " " << C.getAttackDamage() << " " << C.getEnergyPoints() << std::endl;
	std::cout << "S: " << S.getHitPoints() << " " << S.getAttackDamage() << " " << S.getEnergyPoints() << std::endl;
	std::cout << "F: " << F.getHitPoints() << " " << F.getAttackDamage() << " " << F.getEnergyPoints() << std::endl;
	std::cout << "D: " << D.getHitPoints() << " " << D.getAttackDamage() << " " << D.getEnergyPoints() << std::endl;

	std::cout << std::endl;
	D.attack("T-1000");
	std::cout << std::endl;
	D.whoAmI();
	std::cout << std::endl;
	return 0;
}