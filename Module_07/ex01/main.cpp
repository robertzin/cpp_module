#include <iostream>
#include "iter.hpp"

int main( void ) {
	char	arr1[4] = { 'a', 'b', 'c' };
	int		arr2[3] = { 1, 2, 3 };
	float	arr3[3] = { 42.05f, 21.10f, 99.99f };

	int length1 = (sizeof(arr1) / sizeof(arr1[0])) - 1;
	int length2 = (sizeof(arr2) / sizeof(arr2[0]));
	int length3 = (sizeof(arr3) / sizeof(arr3[0]));

	iter(arr1, length1, printOne);
	std::cout << std::endl;
	iter(arr2, length2, printOne);
	std::cout << std::endl;
	iter(arr3, length3, printOne);
	std::cout << std::endl;

	std::cout << std::endl;
	iter(arr1, length1, plusTwo);
	iter(arr1, length1, printOne);
	std::cout << std::endl;
	
	iter(arr2, length2, plusTwo);
	iter(arr2, length2, printOne);
	std::cout << std::endl;
	
	iter(arr3, length3, plusTwo);
	iter(arr3, length3, printOne);

	return 0;
}