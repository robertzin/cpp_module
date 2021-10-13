#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {

	public:
		FragTrap( void );
		FragTrap( std::string name );
		~FragTrap( void );
		FragTrap( const FragTrap& toCopy );
		FragTrap& operator=( const FragTrap& value );

		void highFivesGuys(void);
};