#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(void) {
	// const Animal* meta = new Animal();
	// std::cout << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl;
	const Animal* i = new Cat();
	
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;
	i->makeSound();
	std::cout << std::endl;
	j->makeSound();
	// std::cout << std::endl;
	// meta->makeSound();
	
	std::cout << std::endl;
	// delete meta;
	delete j;
	delete i;

	return 0;
}