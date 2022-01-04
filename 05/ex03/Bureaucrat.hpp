//
// Created by Felipe Cody on 12/9/21.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat{
private:
	std::string _name;
	int _grade;
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);

	Bureaucrat & operator=(const Bureaucrat& right);
	void gradeIncrement();
	void gradeDecrement();
	std::string getName() const;
	int getGrade() const;
	class GradeTooHighException : public std::exception{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception{
		virtual const char *what() const throw();
	};
	void signForm(Form & form);
	void executeForm(Form const & form);
};

std::ostream & operator<<(std::ostream & o, const Bureaucrat & right);

#endif
