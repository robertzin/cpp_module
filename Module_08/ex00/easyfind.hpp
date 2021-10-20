#include <exception>
#include <array>
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

template < typename T >
int easyfind( T array, int toFind ) {
	typename T::const_iterator it;
	it = std::find(array.begin(), array.end(), toFind);
	if (it != array.end())
		return *it;
	throw std::runtime_error("Can not find an element in container :(");
	
	// ----------Using iterators---------- //
	// typename T::const_iterator it;
	// it = array.begin();
	// while (it != array.end()) {
	// 	if (*it == toFind)
	// 		return *it;
	// 	it++;
	// }
	// throw std::runtime_error("Can not find an element in container :(");

}