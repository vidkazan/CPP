//
// Created by Felipe Cody on 12/9/21.
//

#ifndef RRFORM_HPP
#define RRFORM_HPP
#include <iostream>
#include "Form.hpp"


class RobotomyRequestForm : public Form{
private:
	std::string _target;
	void writeToFile() const;
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm & src);
	std::string getTarget();
	RobotomyRequestForm& operator=(const RobotomyRequestForm & src);
	virtual void execute(Bureaucrat const & executor) const;
	class FormIsNotSignedException : public std::exception{
		virtual const char *what() const throw();
	};
};

#endif
