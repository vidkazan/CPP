//
// Created by Felipe Cody on 12/8/21.
//

#include "main.hpp"

phoneBook::phoneBook(){
	_contactCounter = 0;
}

phoneBook::~phoneBook(){
}

void	phoneBook::addContact(){
	_contactBook[_contactCounter].createContact();
	if(_contactCounter == 7)
		_contactCounter = 0;
	else
	_contactCounter++;
}

void	phoneBook::searchContact(){
	std::string input;

	int i=0;
	for(;i<8;i++){
		if(!_contactBook[i].printContacts(i)){
			i--;
			break;
		}
	}
	if(i > -1)
	{
		std::cout << "Choose contact index to show: "<< std::ends;
		if(!std::getline(std::cin, input) || input.size() > 1 || !(std::isdigit(input[0])))
			return;
		int j = atoi(&input[0]);
		if(j <= i && j < 8)
			_contactBook[j].printFullContact();
	}
}