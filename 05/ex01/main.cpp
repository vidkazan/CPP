//
// Created by Felipe Cody on 12/9/21.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
	try
	{
		Bureaucrat bur150("bur150", 150);
		Form form1("12", false, 12,12);
		bur150.signForm(form1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}
