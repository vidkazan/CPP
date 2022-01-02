//
// Created by Felipe Cody on 12/9/21.
//

#include "Bureaucrat.hpp"

int main( void ) {
	try{
		Bureaucrat * test2 = new Bureaucrat("B1", 150);
		std::cout << *test2 << std::endl;
		Bureaucrat test("B1", 151);
		std::cout << test;
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
