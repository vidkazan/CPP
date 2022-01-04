//
// Created by Felipe Cody on 12/9/21.
//

#ifndef SCFORM_HPP
#define SCFORM_HPP
#include <iostream>
#include "Form.hpp"


class ShrubberyCreationForm : public Form{
private:
	std::string _target;
	void writeToFile() const;
public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm & src);
	std::string getTarget();
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm & src);
	virtual void execute(Bureaucrat const & executor) const;
	class FormIsNotSignedException : public std::exception{
		virtual const char *what() const throw();
	};
};

#endif
