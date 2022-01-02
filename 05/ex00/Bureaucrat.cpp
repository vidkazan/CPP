//
// Created by Felipe Cody on 12/9/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("DefaultBureaucratName"), _grade(0){}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if(_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if(_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat(){}

std::string Bureaucrat::getName() const{
	return _name;
}

int Bureaucrat::getGrade() const{
	return _grade;
}

void Bureaucrat::gradeDecrement(){
	this->_grade++;
	if(_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::gradeIncrement(){
	this->_grade--;
	if(_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat&right){
	_grade = right.getGrade();
	_name = right.getName();
	return *this;
}

std::ostream & operator<<(std::ostream & o, const Bureaucrat & right) {
	o <<right.getName() << ", bureaucrat grade " << right.getGrade();
	return o;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade is too HIGH";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade is too LOW";
}
