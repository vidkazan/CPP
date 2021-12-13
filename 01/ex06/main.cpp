//
// Created by Felipe Cody on 12/9/21.
//

#include    "Karen.hpp"

int main(int ac, char **av){
	Karen karen;
	if(ac != 2)
		return 1;
	std::string level = av[1];
	karen.complain(level);
	return 0;
}