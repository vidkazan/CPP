//
// Created by Felipe Cody on 12/8/21.
//

#include "main.hpp"

contact::contact(){
	_keys[0] = "First name";
	_keys[1] = "Last name";
	_keys[2] = "Nickname";
	_keys[3] = "Phone number";
	_keys[4] = "Secret";
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

bool	contact::printContacts(unsigned int index){
	std::string contentPrint;
	if(_content[0].empty())
		return false;
	std::cout << "|" << std::setw(10) << index << std::ends;
	for(int i=0; i < 3; i++)
	{
		if(_content[i].size() > 9){
			contentPrint = _content[i].substr(0, 9);
			contentPrint.append(".");
		}
		else
			contentPrint  = _content[i];
		std::cout << "|" << std::ends << std::setw(10) << _keys[i] << "|" << std::setw(10) << contentPrint << std::ends;
	}
	std::cout << "|" << std::endl;
	return true;
}

void	contact::printFullContact()
{
	for(int counter = 0;counter < 5; counter++)
		std::cout << "  "<< _keys[counter] << ":"<< _content[counter] << std::endl;
}

void contact::createContact(){
	std::string input;

	for(int counter = 0;counter < 5; counter++)
	{
		while(true){
			std::cout << "  "<< _keys[counter]<< ": ";
			if(!std::getline(std::cin, input))
				return;
			if (counter != 0 || contact::inputCheck(input))
				break;
		}
		_content[counter] = input;
	}
	std::cout << " Contact created!" << std::endl;
}