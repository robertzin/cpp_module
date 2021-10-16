#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template < class T >
class Array {
	protected:
		int _size;
		T *_data;

	public:
		Array() : _size(0), _data(new T[0]) {}

		Array(unsigned int size) : _size(size), _data(new T[size]) {}

		~Array() { delete[] this->_data; }

		Array( const Array& toCopy ) {
			if (this->_size > 0)
				delete [] _data;
			_data = new T[toCopy._size];
			_size = toCopy._size;
			for (int i = 0; i < toCopy.size(); i++) {
				this->_data[i] = toCopy._data[i];
			}
		}

		Array& operator=( const Array& other ) {
			if (this == &other)
				return *this;
			if (this->_size > 0)
				delete[] _data;
			this->_data = new T[other._size];
			this->_size = other._size;
			for (int i = 0; i < other.size(); i++) {
				this->_data[i] = other._data[i];
			}
			return *this;
		}

		T& operator[](int index) {
			if (index < 0 || index >= this->_size)
				throw std::runtime_error("Error: assignation index is out of bounds :(");
			return this->_data[index];
		}

		int size() const { return this->_size; }
		
		void printArray() const {
			for (int i = 0; i < this->_size; i++) {
				if ((i % 15) == 0)
					std::cout << std::endl;
				std::cout << this->_data[i] << " ";
			}
		}
};
 
#endif