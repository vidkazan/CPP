//
// Created by Felipe Cody on 12/9/21.
//

#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Form *Intern::makeForm(std::string formName, std::string formTarget){
	int c = int(formName[0]);
	switch (c){
		case 83:
		{
			Form *form = new ShrubberyCreationForm(formTarget);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return form;
		}
		case 82:
		{
			Form *form = new RobotomyRequestForm(formTarget);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return form;
		}
		case 80:
		{
			Form *form = new PresidentialPardonForm(formTarget);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return form;
		}
		default:{
			std::cout << "Intern failed to create form " << std::endl;
		}
	}
	return NULL;
}
