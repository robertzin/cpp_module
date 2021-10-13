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

Fixed& Fixed::operator=( const Fixed& value ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedValue = value._fixedValue;
	return *this;
}

//------------Six comparsion operators-------------//
bool Fixed::operator>( const Fixed& value ) const {
	return (this->_fixedValue > value._fixedValue);
}

bool Fixed::operator<( const Fixed& value ) const{
	return (this->_fixedValue < value._fixedValue);
}

bool Fixed::operator>=( const Fixed& value ) const{
	return (this->_fixedValue >= value._fixedValue);
}

bool Fixed::operator<=( const Fixed& value ) const{
	return (this->_fixedValue <= value._fixedValue);
}

bool Fixed::operator==( const Fixed& value ) const{
	return (this->_fixedValue == value._fixedValue);
}

bool Fixed::operator!=( const Fixed& value ) const{
	return (this->_fixedValue != value._fixedValue);
}
//----------------------end------------------------//



//------------Four arithmetic operator-------------//
float Fixed::operator+( const Fixed& value ) {
	float temp1 = (float)this->_fixedValue / ( 1 << this->_num_bits );
	float temp2 = (float)value._fixedValue / ( 1 << this->_num_bits );
	return (temp1 + temp2);
}

float Fixed::operator-( const Fixed& value ) {
	float temp1 = (float)this->_fixedValue / ( 1 << this->_num_bits );
	float temp2 = (float)value._fixedValue / ( 1 << this->_num_bits );
	return (temp1 - temp2);
}

float Fixed::operator*( const Fixed& value ) {
	float temp1 = (float)this->_fixedValue / ( 1 << this->_num_bits );
	float temp2 = (float)value._fixedValue / ( 1 << this->_num_bits );
	return (temp1 * temp2);
}

float Fixed::operator/( const Fixed& value ) {
	float temp1 = (float)this->_fixedValue / ( 1 << this->_num_bits );
	float temp2 = (float)value._fixedValue / ( 1 << this->_num_bits );
	return (temp1 / temp2);
}
//----------------------end------------------------//


//---------Increment / Decrement operators---------//
Fixed& Fixed::operator++( void ) {
	this->_fixedValue++ ;
	return *this;
}

Fixed Fixed::operator++( int ) {
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed& Fixed::operator--( void ) {
	this->_fixedValue++ ;
	return *this;
}

Fixed Fixed::operator--( int ) {
	Fixed tmp = *this;
	++*this;
	return tmp;
}
//----------------------end------------------------//


//-----------Min / Max member functions------------//
Fixed& Fixed::min( Fixed& value1, Fixed& value2 ) {
	if (value1 < value2)
		return value1;
	return value2;
}

const Fixed& Fixed::min( const Fixed& value1, const Fixed& value2 ) {
	if (value1 < value2)
		return value1;
	return value2;
}

Fixed& Fixed::max( Fixed& value1, Fixed& value2 ) {
	if (value1 > value2)
		return value1;
	return value2;
}

const Fixed& Fixed::max( const Fixed& value1, const Fixed& value2 ) {
	if (value1 > value2)
		return value1;
	return value2;
}
//----------------------end------------------------//

Fixed::Fixed( const Fixed& toCopy ) {
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

std::ostream& operator<<( std::ostream& data, const Fixed& value) {
	data << value.toFloat();
	return data;
}

