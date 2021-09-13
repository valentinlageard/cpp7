#ifndef iter_HPP
# define iter_HPP

# include <iostream>

template <typename T>
void iter(T * array, size_t len, void (*f)(T &)) {
	for (size_t i=0; i < len; i++) {
		f(array[i]);
	}
}

// These are template functions for testing

template <typename T>
void addOne(T & x) {
	++x;
}

template <typename T>
void output(T x) {
	std::cout << x << std::endl;
}

#endif
