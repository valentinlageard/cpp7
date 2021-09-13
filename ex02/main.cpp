#include <iostream>
#include "Array.hpp"

int main( void ) {
	std::string format_line(60, '-');

	// INT TESTS

	Array<int> array_int(10);
	Array<int> array_int_empty;

	// Test indexing and index assignation
	std::cout << "array_int.size() = " << array_int.size() << std::endl;
	for (unsigned int i=0; i < array_int.size(); i++) {
		std::cout << "array_int[" << i << "] = " << array_int[i] << std::endl;
	}
	for (unsigned int i=0; i < array_int.size(); i++) {
		array_int[i] = i;
	}
	for (unsigned int i=0; i < array_int.size(); i++) {
		std::cout << "array_int[" << i << "] = " << array_int[i] << std::endl;
	}

	std::cout << format_line << std::endl;

	// Test empty array and array assignation
	std::cout << "array_int_empty.size() = " << array_int_empty.size() << std::endl;
	array_int_empty = array_int;
	std::cout << "array_int_empty = array_int" << std::endl;
	std::cout << "array_int_empty.size() = " << array_int_empty.size() << std::endl;
	for (unsigned int i=0; i < array_int_empty.size(); i++) {
		std::cout << "array_int_empty[" << i << "] = " << array_int_empty[i] << std::endl;
	}
	array_int_empty[0] = 42;
	std::cout << "array_int_empty[0] = 42" << std::endl;
	std::cout << "array_int[0] = " << array_int[0] << std::endl;
	std::cout << "array_int_empty[0] = " << array_int_empty[0] << std::endl;

	std::cout << format_line << std::endl;

	// Test array copying
	Array<int> array_int_copy(array_int);
	for (unsigned int i=0; i < array_int_copy.size(); i++) {
		std::cout << "array_int_copy[" << i << "] = " << array_int_copy[i] << std::endl;
	}
	array_int_copy[0] = 42;
	std::cout << "array_int_copy[0] = 42" << std::endl;
	std::cout << "array_int[0] = " << array_int[0] << std::endl;
	std::cout << "array_int_copy[0] = " << array_int_copy[0] << std::endl;

	std::cout << format_line << std::endl;

	// Test index exception
	try {
		std::cout << "array_int[-1]" << std::endl;
		array_int[-1];
	}
	catch (std::exception const & e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << "array_int[10]" << std::endl;
		array_int[10];
	}
	catch (std::exception const & e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << format_line << std::endl;

	// DOUBLE TESTS

	Array<double> array_double(10);
	Array<double> array_double_empty;

	// Test indexing and index assignation
	std::cout << "array_double.size() = " << array_double.size() << std::endl;
	for (unsigned int i=0; i < array_double.size(); i++) {
		std::cout << "array_double[" << i << "] = " << array_double[i] << std::endl;
	}
	for (unsigned int i=0; i < array_double.size(); i++) {
		array_double[i] = i + 0.1;
	}
	for (unsigned int i=0; i < array_double.size(); i++) {
		std::cout << "array_double[" << i << "] = " << array_double[i] << std::endl;
	}

	std::cout << format_line << std::endl;

	// Test empty array and array assignation
	std::cout << "array_double_empty.size() = " << array_double_empty.size() << std::endl;
	array_double_empty = array_double;
	std::cout << "array_double_empty = array_double" << std::endl;
	std::cout << "array_double_empty.size() = " << array_double_empty.size() << std::endl;
	for (unsigned int i=0; i < array_double_empty.size(); i++) {
		std::cout << "array_double_empty[" << i << "] = " << array_double_empty[i] << std::endl;
	}
	array_double_empty[0] = 42.42;
	std::cout << "array_double_empty[0] = 42" << std::endl;
	std::cout << "array_double[0] = " << array_double[0] << std::endl;
	std::cout << "array_double_empty[0] = " << array_double_empty[0] << std::endl;

	std::cout << format_line << std::endl;

	// Test array copying
	Array<double> array_double_copy(array_double);
	for (unsigned int i=0; i < array_double_copy.size(); i++) {
		std::cout << "array_double_copy[" << i << "] = " << array_double_copy[i] << std::endl;
	}
	array_double_copy[0] = 42.42;
	std::cout << "array_double_copy[0] = 42" << std::endl;
	std::cout << "array_double[0] = " << array_double[0] << std::endl;
	std::cout << "array_double_copy[0] = " << array_double_copy[0] << std::endl;

	std::cout << format_line << std::endl;

	// Test index exception
	try {
		std::cout << "array_double[-1]" << std::endl;
		array_double[-1];
	}
	catch (std::exception const & e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << "array_double[10]" << std::endl;
		array_double[10];
	}
	catch (std::exception const & e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << format_line << std::endl;

	// STRING TESTS

	Array<std::string> array_string(10);
	Array<std::string> array_string_empty;

	// Test indexing and index assignation
	std::cout << "array_string.size() = " << array_string.size() << std::endl;
	for (unsigned int i=0; i < array_string.size(); i++) {
		std::cout << "array_string[" << i << "] = " << array_string[i] << std::endl;
	}
	for (unsigned int i=0; i < array_string.size(); i++) {
		std::string salut = "salut ";
		salut += static_cast<char>(('a' + i));
		array_string[i] = salut;
	}
	for (unsigned int i=0; i < array_string.size(); i++) {
		std::cout << "array_string[" << i << "] = " << array_string[i] << std::endl;
	}

	std::cout << format_line << std::endl;

	// Test empty array and array assignation
	std::cout << "array_string_empty.size() = " << array_string_empty.size() << std::endl;
	array_string_empty = array_string;
	std::cout << "array_string_empty = array_string" << std::endl;
	std::cout << "array_string_empty.size() = " << array_string_empty.size() << std::endl;
	for (unsigned int i=0; i < array_string_empty.size(); i++) {
		std::cout << "array_string_empty[" << i << "] = " << array_string_empty[i] << std::endl;
	}
	array_string_empty[0] = "EWEEEE !";
	std::cout << "array_string_empty[0] = EWEEEE !" << std::endl;
	std::cout << "array_string[0] = " << array_string[0] << std::endl;
	std::cout << "array_string_empty[0] = " << array_string_empty[0] << std::endl;

	std::cout << format_line << std::endl;

	// Test array copying
	Array<std::string> array_string_copy(array_string);
	for (unsigned int i=0; i < array_string_copy.size(); i++) {
		std::cout << "array_string_copy[" << i << "] = " << array_string_copy[i] << std::endl;
	}
	array_string_copy[0] = "EWEEEE !";
	std::cout << "array_string_copy[0] = EWEEEE !" << std::endl;
	std::cout << "array_string[0] = " << array_string[0] << std::endl;
	std::cout << "array_string_copy[0] = " << array_string_copy[0] << std::endl;

	std::cout << format_line << std::endl;

	// Test index exception
	try {
		std::cout << "array_string[-1]" << std::endl;
		array_string[-1];
	}
	catch (std::exception const & e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		std::cout << "array_string[10]" << std::endl;
		array_string[10];
	}
	catch (std::exception const & e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << format_line << std::endl;

	return 0;
}
