#include "Zombie.hpp"

// Zombie*	newZombie( std::string name ) {
// 	Zombie *NoName = new Zombie;

// 	NoName->Zombie::setName(name);
// 	return NoName;
// }

// void randomChump( std::string name ) {
// 	Zombie B;
// 	B.Zombie::setName(name);
// 	B.Zombie::announce();
// }

int	main( void ) {
	int	i = 0;
	int	count = 3;
	Zombie *first_in_horde;
	
	std::cout << "Creating a horde of Zombies using dynamic memory: " << std::endl;
	first_in_horde = zombieHorde(count, "Zombie #000");

	std::cout << std::endl << "Let's give them a names and a voice:" << std::endl;
	while (i < count) {
		first_in_horde[i].announce();
		i++;
	}
	std::cout << std::endl << "Let's kill them all:" << std::endl;
	delete [] first_in_horde;
	return (0);
}