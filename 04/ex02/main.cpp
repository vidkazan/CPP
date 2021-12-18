//
// Created by Felipe Cody on 12/9/21.
//

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void ) {
	AAnimal	*animals[4];

	for(int i=0;i<4;i++)
	{
		if(i%2)
			animals[i] = new Cat;
		else
			animals[i] = new Dog;
	}
	for(int i=0;i<4;i++)
		delete animals[i];

	const Cat *cat1 = new Cat();
	const Cat *cat2 = new Cat(*cat1);

	std::cout << cat1->getBrain() << " " << cat2->getBrain() << std::endl;

	delete cat1;
	delete cat2;

	return 0;
}
