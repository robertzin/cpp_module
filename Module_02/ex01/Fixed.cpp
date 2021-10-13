#include "Fixed.hpp"

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->_fixedValue = 0;
	return;
}

Fixed::Fixed( const int num ) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = num << this->_num_bits;
	return;
}

Fixed::Fixed( const float f ) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = roundf(f * ( 1 << this->_num_bits ) );
	return;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed& Fixed::operator=( Fixed const& value ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedValue = value._fixedValue;
	return *this;
}

Fixed::Fixed( Fixed const& toCopy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
	return;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedValue;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedValue = raw;
}

int Fixed::toInt( void ) const {
	return ( this->_fixedValue >> this->_num_bits );
}

float Fixed::toFloat( void ) const {
	return ( (float)this->_fixedValue / ( 1 << this->_num_bits ) );
}

std::ostream& operator<<( std::ostream& data, Fixed const& value) {
	data << value.toFloat();
	return data;
}