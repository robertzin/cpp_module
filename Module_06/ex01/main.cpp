#include <iostream>

struct Data {
	int num;
};

uintptr_t serialize( Data* ptr ) {
	return ( reinterpret_cast<uintptr_t>(ptr) );
}

Data* deserialize( uintptr_t raw ) {
	return ( reinterpret_cast<Data *>(raw) );
}

int main( void ) {
	Data* data = new Data;
	uintptr_t tmp;
	data->num = 42;

	std::cout << data->num << std::endl;
	std::cout << data  << std::endl;

	tmp = serialize(data);
	std::cout << std::endl;
	std::cout << tmp << std::endl;
	
	Data *lol = deserialize(tmp);
	std::cout << lol << std::endl;

	std::cout << std::endl;
	std::cout << data->num << std::endl;
	std::cout << data  << std::endl;

	return 0;
}