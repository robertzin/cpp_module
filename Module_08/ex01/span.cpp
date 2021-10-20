#include "span.hpp"

Span::Span( unsigned int N ) : _size(N) {};

Span::Span( const Span& toCopy ) {
	this->_size = toCopy._size;
	_nums.clear();
	this->_nums = toCopy._nums;
};

Span::~Span() {};

Span& Span::operator=( const Span& other ) {
	if (this == &other)
		return *this;
	this->_nums = other._nums;
	this->_size = other._size;
	return *this;
}

unsigned long Span::mySize() { return _nums.size(); }

void Span::addNumber( const int &n ) {
	if ( _nums.size() < _size ) {
		_nums.push_back(n);
		std::cout << "Adding num: " << n << std::endl;
	}
	else
		throw std::runtime_error("Error while adding: Vector has a fixed size " + std::to_string(_size));
}

void Span::printAll() {
	std::vector<int>::const_iterator it;
	it = _nums.begin();
	while (it != _nums.end()) {
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

int Span::shortestSpan() {
	if ( _nums.size() < 2 )
		throw std::runtime_error("It is possible to find a span if at least 2 elements are in Vector :(");
	
	std::vector<int>::const_iterator it;
	it = _nums.begin();
	int tmp1 = *it;
	int tmp2 = *(it + 1);
	int min_span = abs(*(it + 1) - *it);
	while (++it != _nums.end()) {
		if (abs((*(it + 1) - *(it))) < min_span) {
			tmp1 = *(it);
			tmp2 = *(it + 1);
			min_span = abs(tmp2 - tmp1);
		}
	}

	std::cout << "Shortest span in Vector is between " << tmp1 << " and " << tmp2 << ": ";
	return (min_span < 0) ? (min_span *= -1) : min_span;
}

int Span::longestSpan() {
	Span tmp(*this);
	if ( _nums.size() < 2 )
		throw std::runtime_error("It is possible to find a span if at least 2 elements are in Vector :(");
	std::sort(tmp._nums.begin(), tmp._nums.end());
	std::cout << "Longest span in Vector is between " << *(tmp._nums.begin()) << " and " << *(tmp._nums.end() - 1) << ": ";
	return (*(tmp._nums.end() - 1) - *(tmp._nums.begin()));
}