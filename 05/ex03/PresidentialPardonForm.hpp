//
// Created by Felipe Cody on 12/9/21.
//

#ifndef PPFORM_HPP
#define PPFORM_HPP
#include <iostream>
#include "Form.hpp"


class PresidentialPardonForm : public Form{
private:
	std::string _target;
	void writeToFile() const;
public:
	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm & src);
	std::string getTarget();
	PresidentialPardonForm& operator=(const PresidentialPardonForm & src);
	virtual void execute(Bureaucrat const & executor) const;
	class FormIsNotSignedException : public std::exception{
		virtual const char *what() const throw();
	};
};

#endif
