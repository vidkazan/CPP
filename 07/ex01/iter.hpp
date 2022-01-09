#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <iomanip>

template<typename T>

void iter(T const *arr, size_t const arrLen, void (*f)(T const &))
{
	for (size_t i = 0; i < arrLen; i++) {
		f(arr[i]);
	}
}

#endif