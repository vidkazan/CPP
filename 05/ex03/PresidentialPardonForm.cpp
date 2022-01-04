//
// Created by Felipe Cody on 12/9/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", false, 25,5), _target("PresidentialPardonFormTarget") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", false, 25,5), _target(target)  {}

PresidentialPardonForm::~PresidentialPardonForm(){}

const char * PresidentialPardonForm::FormIsNotSignedException::what() const throw(){
	return "Form is not signed";
}

std::string PresidentialPardonForm::getTarget(){
	return _target;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm&src){
	if(src.getSignStatus())
		this->getTarget();
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm&src){
	*this = src;
}

void PresidentialPardonForm::execute(const Bureaucrat&executor) const {
	if(!this->getSignStatus())
		throw PresidentialPardonForm::FormIsNotSignedException();
	else if(executor.getGrade() > this->getGradeToExecVal())
		throw Form::GradeTooLowException();
	else
			std::cout << _target << " has been pardoned by Zafod Beeblebrox" <<  std::endl;
}
