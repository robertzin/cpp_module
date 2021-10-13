#include "Fixed.hpp"

int	main ( void ) {
	
	// Fixed a( 30.15f );
	// Fixed b( 20.05f );
	// Fixed c = a + b;
	// Fixed d = a - b;
	// std::cout << c << std::endl;
	// std::cout << d << std::endl;

	// std::cout << (a > b) << std::endl;
	// std::cout << (a < b) << std::endl;
	// std::cout << (a >= b) << std::endl;
	// std::cout << (a <= b) << std::endl;
	// std::cout << (a == b) << std::endl;
	// std::cout << (a != b) << std::endl;


	Fixed 		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );


	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}