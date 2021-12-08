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
	_contactCounter++;
}

void	phoneBook::searchContact(){

}