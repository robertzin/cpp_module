#include "Fixed.hpp"

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_value = 0;
	return;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const& toCopy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
	return;
}

Fixed& Fixed::operator=( Fixed const& value ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_value = value.getRawBits();
	return *this;;
}


int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_value;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_value = raw;
}