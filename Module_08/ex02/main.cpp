#include "mutantstack.hpp"

# include <iostream>
# include <list>


int main(void) {
	MutantStack<int> mstack;
	
	mstack.push(5); // inserts element at the top
	mstack.push(17); // inserts element at the top
	
	std::cout << "At the top: " <<  mstack.top() << std::endl; // accesses the top element
	
	mstack.pop(); // removes the top element
	
	std::cout << "Size: " << mstack.size() << std::endl; // returns the number of elements
	
	mstack.push(3); // inserts element at the top
	mstack.push(5); // inserts element at the top
	mstack.push(737); // inserts element at the top
	mstack.push(0); // inserts element at the top
	
	MutantStack<int>::iterator it = mstack.begin(); // assigning iterator's first element
	MutantStack<int>::iterator ite = mstack.end(); // assigning iterator's last + 1 element
	++it;     
	--it;
	
	while (it != ite) {
		std::cout << "Element in stack: " << *it << std::endl;
		++it;
	}
	
	std::stack<int> s(mstack);

	// ---------------List part--------------- //
	std::cout << std::endl << "*** List tests ***" << std::endl;
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	
	std::cout << "At the top: " <<  lst.front() << std::endl;
	
	lst.pop_front();
	
	std::cout << "Size: " << lst.size() << std::endl;
	
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
	
	std::list<int>::iterator lit = lst.begin();
	std::list<int>::iterator lite = lst.end();
	++lit;     
	--lit;
	
	while (lit != lite) {
		std::cout << "Element in list: " << *lit << std::endl;
		++lit;
	}
	
	std::list<int> lst2(lst);
	return 0;
}