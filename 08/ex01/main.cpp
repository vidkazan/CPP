//
// Created by Felipe Cody on 12/9/21.
//

#include "span.hpp"

int main(){
	Span test(10000);
	try
	{
		test.addRandomNumbers(10000);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	}
	test.printArray();
	std::cout << "	size: " << test.size() << "\n";
	try
	{
	std::cout << "longes spanes: " << test.longestSpan() << "\n";
	std::cout << "shortes spanes: " << test.shortestSpan() << "\n";
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << "\n";
	}
}