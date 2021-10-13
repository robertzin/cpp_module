#include <iostream>

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
		int getHitPoints( void ) const;
		int getEnergyPoints( void ) const;
		int getAttackDamage( void ) const;
		
		void setName( std::string const name );
		void setHitPoints( unsigned int const amount );
		void setEnergyPoints( unsigned int const amount );
		void setAttackDamage( unsigned int const amount );

};