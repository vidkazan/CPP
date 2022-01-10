//
// Created by Felipe Cody on 12/9/21.
//
#include <iostream>
#include <iomanip>
#include <cmath>

bool stringCheck(std::string & str)
{
	for(int i = 0; i < static_cast<int>(str.size()); i++)
	{
		if(str != "nan" && !std::isdigit(str[i]) && (str[i] != 'f' && &str[i] == &str.back()))
			return false;
	}
	return true;
}

void convertInt(std::string &src)
{
	int n;

	std::cout << "int: ";
	if(!stringCheck(src))
	{
		std::cout << "impossible\n";
		return;
	}
	try
	{
		n = static_cast<int>(stoi(src));
	}
	catch(std::invalid_argument & e){
		std::cout << "impossible\n";
		return;
	}
	catch(std::out_of_range & e){
		std::cout << "impossible\n";
		return;
	}
	std::cout << n << std::endl;
}

void convertChar(std::string &src)
{
	int n;

	std::cout << "char: ";
	if(!stringCheck(src))
	{
		std::cout << "impossible\n";
		return;
	}
	try
	{
		n = static_cast<int>(stoi(src));
	}
	catch(std::invalid_argument & e){
		std::cout << "impossible\n";
		return;
	}
	catch(std::out_of_range & e){
		std::cout << "impossible\n";
		return;
	}
	if(n < -128 || n > 127){
		std::cout << "impossible\n";
		return;
	}
	if(!isprint(n))
		std::cout << "not displayable\n";
	else
		std::cout << "\'" << static_cast<char>(n)<< "\'" << std::endl;
}

void convertFloat(std::string &src)
{
	float f;
	std::cout.precision(1);
	std::cout << std::fixed;
	std::cout << "float: ";
	if(!stringCheck(src))
	{
		std::cout << "impossible\n";
		return;
	}
	try
	{
		f = static_cast<float>(stof(src));
	}
	catch(std::exception & e){
		std::cout << "impossible\n";
		return;
	}
	std::cout << f << "f" << std::endl;
}

void convertDouble(std::string &src)
{
	double d;
	std::cout.precision(1);
	std::cout << std::fixed;
	std::cout << "double: ";
	if(!stringCheck(src))
	{
		std::cout << "impossible\n";
		return;
	}
	try
	{
		d = static_cast<double>(stof(src));
	}
	catch(std::exception & e){
		std::cout << "impossible\n";
		return;
	}
	std::cout << d << std::endl;
}

int main(int ac, char **av)
{
	if(ac != 2){
		std::cout << "convert: 1 agr is needed\n";
		return 1;
	}
	std::string src = static_cast<std::string>(av[1]);
	convertChar(src);
	convertInt(src);
	convertFloat(src);
	convertDouble(src);
	return 0;
}