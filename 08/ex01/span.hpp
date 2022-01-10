#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

class Span{
private:
	std::vector<int> _data;
	unsigned int _size;
	std::vector<int>::iterator _begin;
	std::vector<int>::iterator _current;
	std::vector<int>::iterator _end;
public:
	Span();
	Span(unsigned int n);
	Span(const Span & src);
	Span & operator=(const Span & src);
	virtual ~Span();
	void addNumber(int n);
	void addRandomNumbers(unsigned int count);
	int shortestSpan();
	int longestSpan();
	unsigned int size();
	void printArray();
	class TooManyArgumentsException : public std::exception{
		virtual const char *what() const throw();
	};
	class TooFewArgumentsException : public std::exception{
		virtual const char *what() const throw();
	};
	void setVector(const std::vector<int> & src);
};

#endif