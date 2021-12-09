//
// Created by Felipe Cody on 12/8/21.
//

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include "phoneBook.hpp"

class contact{

private:
	std::string _content[5];
	std::string _keys[5];
public:
	contact();
	~contact();
	void	createContact();
	bool	printContacts(unsigned int index);
	void	printFullContact();
	static bool	inputCheck(std::string input);
};

#endif
