#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>
# include <iostream>

template < typename T >
class MutantStack : public std::stack<T> {

	public:

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		MutantStack() : std::stack<T>() {};
		MutantStack( const MutantStack& toCopy ) : std::stack<T>(toCopy) {};
		virtual ~MutantStack() {};

		MutantStack& operator=( const MutantStack& other ) {
			if ( *this == other )
				return *this;
			std::stack<T>::operator=( other );
			return *this;
		}

		iterator begin() { return (std::stack<T>::c.begin()); }
		iterator end() { return (std::stack<T>::c.end()); }
		const_iterator begin() const { return (std::stack<T>::c.begin()); }
		const_iterator end() const { return (std::stack<T>::c.end()); }
		reverse_iterator rbegin() { return (std::stack<T>::c.rbegin()); }
		reverse_iterator rend() { return (std::stack<T>::c.rend()); }
		const_reverse_iterator rbegin() const { return (std::stack<T>::c.rbegin()); }
		const_reverse_iterator rend() const { return (std::stack<T>::c.rend()); }
};

#endif