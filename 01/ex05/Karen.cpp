//
// Created by Felipe Cody on 12/14/21.
//

#include "Karen.hpp"

Karen::Karen(){}

Karen::~Karen(){}

void Karen::complain(std::string level){
	void (Karen::*ptr)(void);
	int c = int(level[0]);
	switch (c){
		case 68:
			ptr = &Karen::debug;
			break;
		case 73:
			ptr = &Karen::info;
			break;
		case 87:
			ptr = &Karen::warning;
			break;
		case 69:
			ptr = &Karen::error;
			break;
	}
	(this->*ptr)();
}

void Karen::debug(){
	std::cout <<  "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::error(){
	std::cout <<  "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::info(){
	std::cout <<  "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(){
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}