//
// Created by Felipe Cody on 12/9/21.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
	try
	{
		Bureaucrat * test = new Bureaucrat("B1", 150);
		std::cout << *test << std::endl;
		Bureaucrat test2("B1", 151);
		std::cout << test2;
		delete test;
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat * test3 = new Bureaucrat("B1", 150);
		std::cout << *test3 << std::endl;
		test3->gradeDecrement();
		std::cout << *test3 << std::endl;
		delete test3;
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat * test3 = new Bureaucrat("B1", 1);
		std::cout << *test3 << std::endl;
		test3->gradeIncrement();
		std::cout << *test3 << std::endl;
		delete test3;
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form test4();
	}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
