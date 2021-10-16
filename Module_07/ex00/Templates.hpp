template < typename T >
const T& max( const T& a, const T& b ) { return ( a >=b ) ? a : b; }
template < typename T >
const T& min ( const T& a, const T& b ) { return ( a < b ) ? a : b; }

template < typename T >
void swap( T& a, T& b) {
	T c = a;
	a = b;
	b = c;
}

template <typename T>
class Comparable {
	private:
		T _data;
	public:
		Comparable (const T& rhs) : _data(rhs) {}
		bool operator>	( const Comparable<T>& rhs ) { return ( this->_data > rhs._data ); }
		bool operator<	( const Comparable<T>& rhs ) { return ( this->_data < rhs._data ) ; }
		bool operator>=	( const Comparable<T>& rhs ) { return ( this->_data >= rhs._data ); }
		bool operator<=	( const Comparable<T>& rhs ) { return ( this->_data <= rhs._data ); }
		bool operator==	( const Comparable<T>& rhs ) { return ( this->_data == rhs._data ); }
		bool operator!=	( const Comparable<T>& rhs ) { return !( this->_data == rhs._data ); }
};
