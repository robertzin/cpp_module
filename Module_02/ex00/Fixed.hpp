#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

	private:
		int	_fixed_value;
		static const int _num_bits = 8;

	public:
		Fixed( void );
		Fixed( Fixed const& toCopy );
		~Fixed( void );
		Fixed& operator=( Fixed const& value );
		int getRawBits( void ) const;
		void setRawBits( int const raw );

};

#endif