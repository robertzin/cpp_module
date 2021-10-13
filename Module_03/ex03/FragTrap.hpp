#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public:
		FragTrap( void );
		FragTrap( std::string name );
		~FragTrap( void );
		FragTrap( const FragTrap& toCopy );
		FragTrap& operator=( const FragTrap& value );
		
		// void	attack(std::string const & target);
		void highFivesGuys(void);
};

#endif