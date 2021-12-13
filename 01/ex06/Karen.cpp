//
// Created by Felipe Cody on 12/14/21.
//

#include "Karen.hpp"

Karen::Karen(){}

Karen::~Karen(){}

void Karen::complain(std::string level){
	int c = int(level[0]);
	switch (c){
		case 69:
			this->error();
		case 87:
			this->warning();
		case 73:
			this->info();
		case 68:
			this->debug();
	}
}

void Karen::debug(){
	std::cout <<  "[DEBUG]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl;
}

void Karen::error(){
	std::cout <<  "[ERROR]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::info(){
	std::cout <<  "[INFO]\nI cannot believe adding extra bacon cost more money.\nYou don’t put enough!\nIf you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(){
	std::cout <<  "[WARNING]\nI think I deserve to have some extra bacon for free.\n I’ve been coming here for years and you just started working here last month." << std::endl;
}