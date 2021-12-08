//
// Created by Felipe Cody on 12/8/21.
//

#include "main.hpp"

contact::contact(){
	_keys[0] = "  First name: ";
	_keys[1] = "  Last name: ";
	_keys[2] = "  Nickname: ";
	_keys[3] = "  Phone number: ";
	_keys[4] = "  Some secret?(like password etc.):";
}

contact::~contact(){

}

bool	contact::inputCheck(std::string input){
	int i = -1;

	if (input.empty())
		return false;
	while(input[++i])
	{
		if (input[i] != ' ' && !std::isalnum(input[i]))
			return false;
	}
	return true;
}

void contact::createContact(){
	std::string input;

	for(int counter = 0;counter < 5; counter++)
	{
		while(true){
			std::cout << _keys[counter];
			if(!std::getline(std::cin, input))
				return;
			if (contact::inputCheck(input))
				break;
		}
		_content[counter] = input;
	}
	std::cout << " Contact created!" << std::endl;
}