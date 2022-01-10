//
// Created by Felipe Cody on 12/9/21.
//

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main( void )
{
//	try
//	{
//		Bureaucrat bur150("bur150", 151);
//	}
//	catch (std::exception & e)
//	{
//		std::cout << e.what();
//	}
//
//	try
//	{
//		Bureaucrat bur6("bur6", 6);
//		Bureaucrat bur5("bur5", 5);
//		bur6.gradeIncrement();
//		PresidentialPardonForm form2;
//		bur6.signForm(form2);
//		bur6.executeForm(form2);
//	}
//	catch (std::exception & e)
//	{
//		std::cout << e.what();
//	}
//
//	try
//	{
//		Bureaucrat bur60("bur60", 60);
//		Bureaucrat bur50("bur50", 50);
//		bur60.gradeIncrement();
//		RobotomyRequestForm form3;
//		bur50.signForm(form3);
//		bur50.executeForm(form3);
//	}
//	catch (std::exception & e)
//	{
//		std::cout << e.what();
//	}
//
//	try
//	{
//		Bureaucrat bur60("bur60", 60);
//		Bureaucrat bur150("bur50", 50);
//		bur60.gradeIncrement();
//		ShrubberyCreationForm form1("looool");
//		bur150.signForm(form1);
//		bur60.executeForm(form1);
//	}
//	catch (std::exception & e)
//	{
//		std::cout << e.what();
//	}

	try
	{
		Intern someRandomIntern;
		Bureaucrat bur20("bur20", 20);
		Form* rrf;
		rrf = someRandomIntern.makeForm("P", "Bender");
		if(rrf)
		{
			bur20.signForm(*rrf);
			bur20.executeForm(*rrf);
		}

	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	return 0;
}