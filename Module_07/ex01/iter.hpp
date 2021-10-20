#include <iostream>
#include <cctype>

template< typename T >
void plusTwo (T& element) { element += 2; }

template< typename T >
void printOne (T& element) { std::cout << element << " "; }

template< typename T >
void iter( T* array, int length, void (*func)(T&) ) {
	for ( int i = 0; i < length; i++ ) {
		func(array[i]);
	}
}