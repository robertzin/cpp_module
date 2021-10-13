#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	int	i;
	std::string id_name;
	Zombie *AHordOfZombies = new Zombie[N];

	i = 0;
	while (i < N) {
		id_name = (name + std::to_string(i));
		AHordOfZombies[i].setName( id_name );
		i++;
	}
	return &AHordOfZombies[0];
}