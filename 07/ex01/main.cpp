//
// Created by Felipe Cody on 12/9/21.
//

#include "iter.hpp"

void	plusOne(int const & a) {
	std::cout << "a = " << (a + 1) << std::endl;
}

void 	printStr(std::string const & a) {
	std::cout << "arr = " << a << std::endl;
}

void	printFloat(float const & f) {
	std::cout << "f = " << f << std::endl;
}

int 	main() {
	int a[] = {2, 4, 6, 8};
	::iter( a, 4, plusOne );

	std::string arr[] = {"test1", "test2", "test3"};
	::iter( arr, 3, printStr );

	float f[] = {2.1f, 4.2f, 0.1f};
	::iter( f, 3, printFloat );
}
