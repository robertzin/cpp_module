#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <iterator>

class Span {
	protected:
		std::vector<int>	_nums;
		unsigned int		_size;

	public:
		Span( unsigned int N );
		
		template < typename I >
		Span( I begin, I end ) : _size(end - begin) { std::copy (begin, end, std::back_inserter(_nums)); }
		
		Span( const Span& toCopy );
		Span& operator=( const Span& other);
		~Span();

		unsigned long mySize();
		void addNumber( const int &n );
		void printAll();

		int shortestSpan();
		int longestSpan();
};

#endif