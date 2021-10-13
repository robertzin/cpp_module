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

Zombie* zombieHorde( int N, std::string name );

#endif