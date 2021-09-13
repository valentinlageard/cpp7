#include <iostream>
#include "iter.hpp"

int main( void ) {
	int int_arr[] = {0, 1, 2, 3, 4, 5};
	double double_arr[] = {0.1, 2.3, 4.5, 6.7, 8.9};
	std::string str_arr[] = {"salut", "ca", "va", "?"};

	iter(int_arr, 6, addOne);
	iter(int_arr, 6, output);

	iter(double_arr, 5, addOne);
	iter(double_arr, 5, output);

	iter(str_arr, 4, output);

	return 0;
}
