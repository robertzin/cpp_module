#include <iostream>
#include <typeinfo>       

class Base { public: virtual ~Base(){}; };

class A : public Base { };
class B : public Base { };
class C : public Base { };

Base* generate(void) {
	srand(time(NULL));
	int num = ( rand() % 3 );
	if ( num == 0 ) { 
		std::cout << "An instance of A class was created" << std::endl;
		return (new A);
	}
	else if ( num == 1 ) {
		std::cout << "An instance of B class was created" << std::endl;
		return (new B);
	}
	else {
		std::cout << "An instance of C class was created" << std::endl;
		return (new C);
	}
}

void identify(Base* p) {
	std::cout << std::endl;
	std::cout << "Base: " << p << std::endl;
	std::cout << std::endl;
	std::cout << "A: " << dynamic_cast<A*>(p) << std::endl;
	std::cout << "B: " << dynamic_cast<B*>(p) << std::endl;
	std::cout << "C: " << dynamic_cast<C*>(p) << std::endl;
	std::cout << std::endl;
	
	if (dynamic_cast<A*>(p))
		std::cout << "An instance of A class was identified" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "An instance of B class was identified" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "An instance of C class was identified" << std::endl;
	else
		std::cout << "Conversion is not OK" << std::endl;
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "An instance of A class was identified" << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << "Conversion to A is not OK" << std::endl;
	}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "An instance of B class was identified" << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << "Conversion to B is not OK" << std::endl;
	}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "An instance of C class was identified" << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << "Conversion to C is not OK" << std::endl;
	}
}

int main( void ) {
	Base* D = generate();
	identify(D);
	std::cout << std::endl;
	identify(*D);

	delete D;

	return 0;
}