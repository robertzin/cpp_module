#include <iostream>
#include <limits>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <string>

float begin( std::string str ) {
	float ret;
	
	try
	{
		if ( str.length() == 3 && str[0] == '\'' && str[2] == '\'' )
			return ( static_cast<float>(str[1]) );
		else if ( isascii(str[0]) && !isdigit(str[0]) && (str.length() == 1) )
			return ( static_cast<float>(str[0]) );
		else if ( isdigit(str[0]) ) {
			int i = -1;
			int len = str.length();
			while ( ++i < len ) {
				if ( !isdigit(str[i]) && str[i] != '.' && str[i] != 'f' )
					throw std::runtime_error( "Incorrect argument " + str );
			}
		}
		ret = std::stof(str);
	}
	catch( const std::exception& e )
	{
		throw std::runtime_error( "Incorrect argument " + str );
	}
	return ret;
}

char toChar( float f ) {
	if ( f < 0 || f > 127 )
		throw std::string( "impossible" );
	char c = static_cast<char>(f);
	if ( f == std::numeric_limits<float>::infinity() || f == -std::numeric_limits<float>::infinity()
		|| std::isnan( f ) )
		throw std::string( "impossible" );
	else if ( c < 32 || c > 126 )
		throw std::string( "Non displayable" );
	return c;
}

int toInt ( float f ) {
	int num = static_cast<int>(f);
	if (f == std::numeric_limits<float>::infinity() || f == -std::numeric_limits<float>::infinity()
		|| std::isnan(f))
		throw std::string("impossible");
	return (num);
}

int main( int argc, char **argv ) {

	if ( argc != 2 ) {
		std::cout << "This program needs 2 input params" << std::endl;
		return 1;
	}
	float input;
	std::string tmp = argv[1];
	
	// try to convertinput to float //
	try { input = begin(tmp); }
	catch(const std::exception& e) {
		std::cout << e.what() << '\n'; 
		return 1;
	}

	// try to convert float to char //
	try {
		char c = toChar(input);
		std::cout << "char: '" << c << "'" << std::endl;
	}
	catch (std::string & e) { std::cout << "char: " << e << std::endl; }
	
	// try to convert float to int //
	try {
		int num = toInt(input);
		std::cout << "int: " << num << std::endl;
	}
	catch (std::string & e) { std::cout << "int: " << e << std::endl; }

	std::cout << std::fixed;
	std::cout << "float: " << static_cast<float>(input) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(input) << std::endl;

	return 0;
}