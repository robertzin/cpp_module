#include "Zombie.hpp"

void randomChump( std::string name ) {
	Zombie B;
	B.Zombie::setName(name);
	B.Zombie::announce();
}