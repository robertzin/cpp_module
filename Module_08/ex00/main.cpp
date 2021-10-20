#include "easyfind.hpp"

int main( void ) {
	// ------------Array part - begin------------ //
	std::array<int, 5> arr = { 5, 10, 15, 20 };
	std::cout << std::endl;
	std::cout << "Array elements: ";
	std::array<int, 4>::const_iterator ait;
	ait = arr.begin();
	
	while (ait != arr.end()) {
		std::cout << *ait << " ";
		++ait;
    }
	std::cout << std::endl;
	try {
		std::cout << easyfind(arr, 15);
		std::cout << " - found it!" << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	// -------------Array part - end------------- //


	// ------------Vector part - begin------------ //
	std::vector<int> vtr;
	for (int i = 0; i < 5; i++)
		vtr.push_back(i);

	std::cout << std::endl;
	std::cout << "Vector elements: ";
	std::vector<int>::const_iterator vit;
	vit = vtr.begin();
	
	while (vit != vtr.end()) {
		std::cout << *vit << " ";
		++vit;
    }
	std::cout << std::endl;
	try {
		std::cout << easyfind(vtr, 3);
		std::cout << " - found it!" << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	// -------------Vector part - end------------- //

		// ------------List part - begin------------ //
	std::list<int> lst;
	for (int i = 0; i < 5; i++)
		lst.push_back(i);

	std::cout << std::endl;
	std::cout << "List elements: ";
	std::list<int>::const_iterator lit;
	lit = lst.begin();
	
	while (lit != lst.end()) {
		std::cout << *lit << " ";
		++lit;
    }
	std::cout << std::endl;
	try {
		std::cout << easyfind(lst, 30);
		std::cout << " - found it!" << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	// -------------List part - end------------- //
	return 0;
}