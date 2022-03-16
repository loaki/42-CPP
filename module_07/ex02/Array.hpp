#ifndef ARRAY_HPP_
# define ARRAY_HPP_

# include <cstddef>
# include <exception>

template <typename T>
class Array {
	public:
		Array() : _arr(NULL), _size(0) {}
		Array(unsigned int size) : _arr(new T[size]), _size(size) {}
		Array(const Array& other) :_arr(NULL) {
			*this = other;
		}
		~Array() {
			delete[] this->_arr;
		}

		Array& operator=(const Array& other) {
			if (this == &other) return *this;
			if (this->_size != other._size) {
				if (this->_arr != NULL) delete[] this->_arr;
				this->_arr = new T[other._size];
				this->_size = other.size();
			}
			for (std::size_t i = 0; i < this->_size; ++i) {
				this->_arr[i] = other[i];
			}
			return *this;
		}

		T& operator[](std::size_t index) {
			if (index >= this->_size || index < 0) throw Array::InvalidIndexException();
			else return this->_arr[index];
		}
		const T& operator[](std::size_t index) const {
			if (index >= this->_size || index < 0) throw Array::InvalidIndexException();
			else return this->_arr[index];
		}

		std::size_t size() const {
			return this->_size;
		}
	private:
		T* _arr;
		std::size_t _size;
	public:
		class InvalidIndexException : public std::exception {
			public: virtual const char* what() const throw() {
				return "Invalid index";
			}
		};
};

#endif
