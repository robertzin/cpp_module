#include "Zombie.hpp"

Zombie*	newZombie( std::string name ) {
	Zombie *NoName = new Zombie;

	NoName->Zombie::setName(name);
	return NoName;
}