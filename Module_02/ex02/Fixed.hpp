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
		Fixed( const Fixed& toCopy );
		~Fixed( void );
		
		Fixed& operator=( const Fixed& value );
		bool operator>( const Fixed& value ) const;
		bool operator<( const Fixed& value ) const;
		bool operator>=( const Fixed& value ) const;
		bool operator<=( const Fixed& value ) const;
		bool operator==( const Fixed& value ) const;
		bool operator!=( const Fixed& value ) const;

		float operator+( const Fixed& value );
		float operator-( const Fixed& value );
		float operator*( const Fixed& value );
		float operator/( const Fixed& value );
		
		Fixed& operator++( void );
		Fixed operator++( int );
		Fixed& operator--( void );
		Fixed operator--( int );

		static Fixed& min( Fixed& value1, Fixed& value2 );
		static const Fixed& min( const Fixed& value1, const Fixed& value2 );
		static Fixed& max( Fixed& value1, Fixed& value2 );
		static const Fixed& max( const Fixed& value1, const Fixed& value2 );

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int toInt( void ) const;
		float toFloat( void ) const;

};

std::ostream& operator<<( std::ostream& data, const Fixed& value);

#endif