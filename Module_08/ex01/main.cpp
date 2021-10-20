#include "span.hpp"
#include <ctime>

int main( void ) {
	Span lol = Span(5);

	try
	{
		lol.addNumber(-5);
		lol.addNumber(-2);
		lol.addNumber(17);
		lol.addNumber(108);
		lol.addNumber(11);
		std::cout << lol.shortestSpan() << std::endl;
		std::cout << lol.longestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::vector<int> v(10000);
	std::srand(unsigned(std::time(NULL)));
	std::generate(v.begin(), v.end(), std::rand);
	std::vector<int>::iterator vit;
	vit = v.begin();
	while (vit < v.end()) {
		*vit %= 10000;
		vit++;
	}

	std::cout << std::endl;
	Span kek = Span(v.begin(), v.end());
	std::cout << "Size: " << kek.mySize() << std::endl;
	// kek.printAll();
	std::cout << kek.shortestSpan() << std::endl;
	std::cout << kek.longestSpan() << std::endl;

	return 0;
}