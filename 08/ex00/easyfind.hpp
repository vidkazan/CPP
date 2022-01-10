#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iomanip>
#include <algorithm>

template<typename T>

typename T::iterator easyfind(T & arr, int n){
	typename T::iterator it;
	size_t pos = 0;
	it = arr.begin();
	for(;it < arr.end(); it++)
	{
		if(*it == n)
		{
			std::cout << "position: " << pos << " ";
			return it;
		}
		pos++;
	}
	throw(std::exception());
}

#endif