#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie {
	
public:
	Zombie( void );
	~Zombie( void );
	std::string	getName ( void ) const;
	void setName ( std::string );
	void announce ( void ) const;

private:
	std::string	_name;
};

void randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif