#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		~ScavTrap( void );
		ScavTrap( const ScavTrap& toCopy );
		ScavTrap& operator=( const ScavTrap& value );
		
		void attack( std::string const& target );
		void guardGate();

};

#endif