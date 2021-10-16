#include <iostream>
#include "Templates.hpp"

int main( void ) {
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap( c, d );
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	Comparable <int>n( 20 );
	Comparable <int>m( 20 );

	// Comparable <float>n( 42.05f );
	// Comparable <float>m( 20.15f );

	std::cout << std::endl;
	std::cout << (n > m) << std::endl;
	std::cout << (n < m) << std::endl;
	std::cout << (n >= m) << std::endl;
	std::cout << (n <= m) << std::endl;
	std::cout << (n == m) << std::endl;
	std::cout << (n != m) << std::endl;

	return 0;
}
