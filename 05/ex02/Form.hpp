//
// Created by Felipe Cody on 12/9/21.
//

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSignVal;
	const int _gradeToExecVal;
	bool setSign(Bureaucrat & signer);
protected:
	Form();
	Form(std::string name, bool isSigned, int gradeToSignVal, int gradeToExecVal);
	Form(Form& src);
public:
	virtual ~Form();
	Form& operator=(const Form& right);
	std::string getName() const;
	int getGradeToSignVal() const;
	int getGradeToExecVal() const;
	bool getSignStatus() const;
	class GradeTooHighException : public std::exception{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception{
		virtual const char *what() const throw();
	};
	void beSigned(Bureaucrat &signer);
	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<(std::ostream & o, const Form & right);

#endif
