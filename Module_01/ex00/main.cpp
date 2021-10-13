#include "Zombie.hpp"

int	main( void ) {
	Zombie *A;
	Zombie *B;
	Zombie *C;
	Zombie D;
	Zombie E;
	Zombie F;

	std::cout << "Creating pointer Zombies using dynamic memory: " << std::endl;
	A = newZombie( "Aleksei" );
	A->announce();
	B = newZombie( "Boris" );
	B->announce();
	C = newZombie( "Segey" );
	C->announce();
	
	std::cout << std::endl << "Creating routine Zombies using static memory: " << std::endl;
	D.setName( "Denis" );
	D.announce();
	E.setName( "Evgeniy" );
	E.announce();
	F.setName( "Stepan" );
	F.announce();

	std::cout << std::endl << "Now creating a short-term Zombies: " << std::endl;
	randomChump( "Ivan" );
	randomChump( "Oleg" );
	std::cout << std::endl << "Now killing a pointer Zombies: " << std::endl;
	delete A;
	delete B;
	delete C;
	std::cout << std::endl << "Now killing a routine Zombies" << std::endl;
	return (0);
}