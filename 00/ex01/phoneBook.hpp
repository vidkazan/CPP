//
// Created by Felipe Cody on 12/8/21.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include "contact.hpp"

class phoneBook{
private:
	int	_contactCounter;
	contact _contactBook[8];
public:
	phoneBook();
	~phoneBook();
	void	addContact();
	void	searchContact();
};

#endif
