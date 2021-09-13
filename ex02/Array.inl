#ifndef Array_INL
# define Array_INL

# include "Array.hpp"

template <typename T>
Array<T>::Array():
	_size(0),
	_data(NULL)
{}

template <typename T>
Array<T>::Array(unsigned int n):
	_size(n)
{
	_data = new T[_size]();
}

template <typename T>
Array<T>::Array(Array const & original):
	_size(original._size)
{
	_data = new T[_size]();
	for (unsigned int i=0; i < _size; i++) {
		_data[i] = original._data[i];
	}
}

template <typename T>
Array<T>::~Array() {
	delete [] _data;
}

template <typename T>
Array<T> & Array<T>::operator=(Array const & rhs) {
	if (this == &rhs) {
		return *this;
	}
	_size = rhs._size;
	delete [] _data;
	_data = new T[_size]();
	for (unsigned int i=0; i < _size; i++) {
		_data[i] = rhs._data[i];
	}
	return *this;
}

template <typename T>
T & Array<T>::Array<T>::operator[](int index) {
	if (index < 0 || index >= static_cast<int>(_size)) {
		throw std::runtime_error("invalid index");
	} else {
		return _data[index];
	}
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}

#endif
