#ifndef Array_HPP
# define Array_HPP

#include <stdexcept>

template <typename T>
class Array {

public:
	Array();
	Array(unsigned int n);
	Array(Array const & original);
	virtual ~Array();
	Array & operator=(Array const & rhs);
	T & operator[](int index);

	unsigned int size() const;

private:
	unsigned int _size;
	T * _data;
};

#include "Array.inl"

#endif
