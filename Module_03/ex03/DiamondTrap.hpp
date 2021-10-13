#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

	private:
		std::string	_name;

	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		~DiamondTrap( void );
		DiamondTrap( const DiamondTrap& toCopy );
		DiamondTrap& operator=( const DiamondTrap& value );

		// std::string getName(void) const;
		// void	attack(std::string const & target);

		void whoAmI();

};

#endif