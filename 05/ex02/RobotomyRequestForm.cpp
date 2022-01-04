//
// Created by Felipe Cody on 12/9/21.
//

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", false, 72,45), _target("RobotomyRequestFormTarget") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", false, 72,45), _target(target)  {}

RobotomyRequestForm::~RobotomyRequestForm(){}

const char * RobotomyRequestForm::FormIsNotSignedException::what() const throw(){
	return "Form is not signed";
}

std::string RobotomyRequestForm::getTarget(){
	return _target;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm&src){
	if(src.getSignStatus())
		this->getTarget();
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm&src){
	*this = src;
}

void RobotomyRequestForm::execute(const Bureaucrat&executor) const {
	if(!this->getSignStatus())
		throw RobotomyRequestForm::FormIsNotSignedException();
	else if(executor.getGrade() > this->getGradeToExecVal())
		throw Form::GradeTooLowException();
	else{
		srand(time(nullptr));
		std::cout << "Robot makes some drilling noises" << std::endl;
		if (rand() % 2)
			std::cout << _target << " has been robotomized successfully " <<  std::endl;
		else
			std::cout << _target << " has been robotomized  NOT successfully" << std::endl;
	}
}
