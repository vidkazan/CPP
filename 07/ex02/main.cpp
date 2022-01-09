//
// Created by Felipe Cody on 12/9/21.
//

#include "Array.hpp"


class	Test {
public:
	Test() {}
	Test( int n ) : _n( n ) {}
	int getN() {return this->_n;};
	Test & operator=(Test const & rhs) {
		this->_n = rhs._n;
		return *this;
	}
	bool operator==( Test const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Test const & rhs )const { return (this->_n != rhs._n); }
	bool operator>( Test const & rhs )const { return (this->_n > rhs._n); }
	bool operator<( Test const & rhs ) const{ return (this->_n < rhs._n); }
	bool operator>=( Test const & rhs ) const{ return (this->_n >= rhs._n); }
	bool operator<=( Test const & rhs ) const{ return (this->_n <= rhs._n); }
private:
	int _n;
};

std::ostream & operator<<(std::ostream & o,Test & src)
{
	o << src.getN();
	return (o);
}

template<typename T>
void array_print(T & arr)
{
	std::cout << "\narray_print\n";
	std::cout << "size:";
	std::cout << arr.size() << "\n";
	for(unsigned int i = 0;i < arr.size(); i++){
		std::cout << "arr[" << i << "] = " << arr[i] << " "<< &arr[i] << " " <<  "\n";
	}
}

int 	main() {

	unsigned int u = 2;
	::Array<int> test(u);
	for(unsigned int i = 0;i < test.size();i++){
		test[i] = 1;
	}

	unsigned int u2 = 3;
	::Array<int> test2(u2);
	for(unsigned int i = 0;i < test2.size();i++){
		test2[i] = 2;
	}

	::Array<int>test3;

	test3 = test2;

	for(unsigned int i = 0;i < test3.size();i++){
		test3[i] = 3;
	}
	std::cout << "\n\narray: test " << &test <<"\n";
	array_print(test);
	std::cout << "\n\narray: test2 " << &test2 <<"\n";
	array_print(test2);
	std::cout << "\n\narray: test3 " << &test3 <<"\n";
	array_print(test3);



	unsigned int u4 = 10;
	::Array<Test> test4(u4);
	for(unsigned int i = 0;i < test4.size();i++){
		test4[i] = 5;
	}

	std::cout << "\n\narray: test4 " << &test4 <<"\n";
	array_print(test4);
	try{
		test3[-1] = 0;
	}
	catch(std::exception & e){
		std::cout << "Index is out of range\n";
	}
}

