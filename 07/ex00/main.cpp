//
// Created by Felipe Cody on 12/9/21.
//

#include "main.hpp"

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

int main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	Test t(1);
	Test r(2);
	Test res;
	::swap(t, r);
	std::cout << "t = " << t.getN() << ", r = " << r.getN() << std::endl;
	res = ::min(t,r);
	std::cout << "min( t, r ) = " << res.getN() << std::endl;
	res = ::max(t,r);
	std::cout << "max( t, r ) = " << res.getN() << std::endl;
}
