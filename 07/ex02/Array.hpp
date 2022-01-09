#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <iomanip>

template<typename T>

class Array{
private:
	T * _arr;
	unsigned int _size;
public:
	Array(){
		_arr = new T[0];
		_size = 0;
	};
	Array(unsigned int u){
		_size = u;
		_arr = new T[u];
	};
	Array(T const & src){
		*this = src;
	};
	~Array(){
		delete [] _arr;
	}
	Array<T> & operator=(Array<T> const & src){
		delete [] _arr;
		_arr = nullptr;
		_arr = new T[src.size()];
		_size = src.size();
		for(unsigned int i = 0;i < src.size(); i++){
			this->_arr[i] = src._arr[i];
		}
		return *this;
	}
	T & operator[](const unsigned int u){
		if(u >= _size || u < 0)
			throw std::exception();
		return _arr[u];
	}
	unsigned int size() const{
		return _size;
	};
};

#endif