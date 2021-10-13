#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	private:
		int	_fixedValue;
		static const int _num_bits = 8;

	public:
		Fixed( void );
		Fixed( const int num );
		Fixed( const float num );
		Fixed( Fixed const& toCopy );
		~Fixed( void );
		
		Fixed& operator=( Fixed const& value );

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int toInt( void ) const;
		float toFloat( void ) const;

};

std::ostream& operator<<( std::ostream& data, Fixed const& value);

#endif