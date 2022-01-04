//
// Created by Felipe Cody on 12/9/21.
//

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", false, 145,137), _target("ShrubberyCreationFormTarget") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", false, 145,137), _target(target)  {}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

const char * ShrubberyCreationForm::FormIsNotSignedException::what() const throw(){
	return "Form is not signed";
}


std::string ShrubberyCreationForm::getTarget(){
	return _target;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm&src){
	if(src.getSignStatus())
		this->getTarget();
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm&src){
	*this = src;
}

void ShrubberyCreationForm::writeToFile() const {
	std::string filename = _target + "_shrubbery";
	std::ofstream file(filename, std::ios::out);
	file << "    _    ____   ____ ___ ___\n"
			"   / \\  / ___| / ___|_ _|_ _|\n"
			"  / _ \\ \\___ \\| |    | | | |\n"
			" / ___ \\ ___) | |___ | | | |\n"
			"/_/   \\_\\____/ \\____|___|___|";
	file.close();
}

void ShrubberyCreationForm::execute(const Bureaucrat&executor) const {
	if(!this->getSignStatus())
		throw ShrubberyCreationForm::FormIsNotSignedException();
	else if(executor.getGrade() > this->getGradeToExecVal())
		throw Form::GradeTooLowException();
	else
		ShrubberyCreationForm::writeToFile();

}
