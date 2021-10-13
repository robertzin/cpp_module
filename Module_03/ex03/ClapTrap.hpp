#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <iomanip>

class ClapTrap {

	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& toCopy );
		~ClapTrap( void );
	
		ClapTrap& operator=( const ClapTrap& value );
		
		void attack( std::string const& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
		
		std::string getName( void ) const;
		unsigned int getHitPoints( void ) const;
		unsigned int getEnergyPoints( void ) const;
		unsigned int getAttackDamage( void ) const;
		
		void setName( std::string name );
		void setHitPoints( unsigned int amount );
		void setEnergyPoints( unsigned int amount );
		void setAttackDamage( unsigned int amount );

};

#endif