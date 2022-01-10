//
// Created by Felipe Cody on 12/9/21.
//
#include <iostream>

class Base{
public:
	virtual ~Base();
};

class A : public Base{
	virtual ~A();
};

class B : public Base{
	virtual ~B();
};

class C : public Base{
	virtual ~C();
};

Base::~Base(){}

A::~A(){}

B::~B(){}

C::~C(){}

void identify(Base* p){
	std::cout << "identify ptr:";
	if(dynamic_cast<A*>(p))
		std::cout << " this is A class ptr\n";
	else if(dynamic_cast<B*>(p))
		std::cout << " this is B class ptr\n";
	else if(dynamic_cast<C*>(p))
		std::cout << " this is C class ptr\n";
	else
		std::cout << " this is not A/B/C class ptr\n";
}

void identify(Base& p){
	std::cout << "identify ref:";
	try{
		(void)dynamic_cast<A&>(p);
		std::cout << " this is A class ref\n";
	}catch (std::bad_cast){}
	try{
		(void)dynamic_cast<B&>(p);
		std::cout << " this is B class ref\n";
	}catch (std::bad_cast){}
	try{
		(void)dynamic_cast<C&>(p);
		std::cout << " this is C class ref\n";
	}catch (std::bad_cast){}
}

Base * generate(void){
	Base *obj;
	srand(time(nullptr));
	switch (rand() % 3){
		case 0:
			obj= new A();
			std::cout << "generate: A class created\n";
			break;
		case 1:
			obj = new B();
			std::cout << "generate: B class created\n";
			break;
		case 2:
			obj = new C();
			std::cout << "generate: C class created\n";
			break;
	}
	return obj;
}

int main(){
	Base *test = generate();
	identify(test);
	identify(*test);
	delete test;
	return 0;
};