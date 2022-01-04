//
// Created by Felipe Cody on 12/9/21.
//

#include "Form.hpp"

Form::Form() : _name("DefaultFormName"),_isSigned(false), _gradeToSignVal(1),  _gradeToExecVal(1)  {}

Form::Form(std::string name, bool isSigned, int gradeToSignVal, int gradeToExecVal) : _name(name), _isSigned(isSigned), _gradeToSignVal(gradeToSignVal), _gradeToExecVal(gradeToExecVal) {
	if(_gradeToExecVal < 1 || _gradeToSignVal < 1)
		throw Form::GradeTooHighException();
	if(_gradeToExecVal > 150 || _gradeToSignVal > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form &src) : _name(src._name), _isSigned(src._isSigned), _gradeToSignVal(src._gradeToSignVal), _gradeToExecVal(src._gradeToExecVal) {}

Form& Form::operator=(const Form &right) {
	_isSigned = right._isSigned;
	return *this;
}

Form::~Form() {}

std::ostream & operator<<(std::ostream & o, const Form & right)
{
	o << right.getName() << ", status: " <<  right.getSignStatus() << ", grade: to exec  " << right.getGradeToExecVal() << " to sign "<< right.getGradeToSignVal() << std::endl;
	return o;
}

std::string Form::getName() const {
	return _name;
}

int Form::getGradeToSignVal() const {
	return _gradeToSignVal;
}

int Form::getGradeToExecVal() const {
	return _gradeToExecVal;
}

bool Form::getSignStatus() const {
	return _isSigned;
}

const char *Form::GradeTooHighException::what() const throw(){
	return "Grade is too HIGH";
}

const char *Form::GradeTooLowException::what() const throw(){
	return "Grade is too LOW";
}

void Form::beSigned(Bureaucrat&signer){
	if(signer.getGrade() > this->getGradeToSignVal())
		throw Form::GradeTooLowException();
	else
		this->_isSigned = true;
}

bool Form::setSign(Bureaucrat & signer)
{
	if(signer.getGrade() > this->getGradeToSignVal())
		return false;
	else if (this->getSignStatus())
		return false;
	else
	{
		this->_isSigned = true;
		return true;
	}
}