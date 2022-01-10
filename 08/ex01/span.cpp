#include "span.hpp"

Span::Span() : _size(0), _begin(_data.begin()), _end(_data.end()){}

Span::Span(unsigned int n) : _size(n), _begin(_data.begin()), _end(_data.end()){
}

Span::~Span(){
	_data.erase(_data.begin(), _data.end());
}

unsigned int Span::size(){
	return _data.size();
}

void Span::addNumber(int n){
	if(_size == _data.size())
		throw TooManyArgumentsException();
	_data.push_back(n);
}

void Span::addRandomNumbers(unsigned int count){
	srand(time(nullptr));
	if((_data.size() + count) > _size)
		throw TooManyArgumentsException();

	for(;count > 0;count--){
		_data.push_back(rand());
	}
}

void Span::printArray(){
	int i=-1;
	std::vector<int>::iterator _it = _data.begin();
	std::cout << "arrayPrint\n";
	_end = _data.end();
	for(;_it != _end;_it++){
		std::cout << ++i << ": " << *_it <<  "\n";
	}
}

const char * Span::TooManyArgumentsException::what() const throw(){
	return "add numbers: too many arguments";
}

const char * Span::TooFewArgumentsException::what() const throw(){
	return "span: too few arguments";
}

void Span::setVector(const std::vector<int>&src){
	_data = src;
	_size = src.size();
}

int Span::longestSpan(){
	if(_data.size() < 2)
		throw TooFewArgumentsException();
	return (abs(*std::max_element(_data.begin(), _data.end()) - *std::min_element(_data.begin(), _data.end())));
}

int Span::shortestSpan(){
	int res = INT_MAX;
	if(_data.size() < 2)
		throw TooFewArgumentsException();
	_begin = _data.begin();
	unsigned int currentSize = _data.size();
	for(unsigned int i = 0; i < currentSize;i++){
		for(unsigned int j = 0; j < currentSize;j++){
			if(i != j && abs(*(_begin + i) - *(_begin + j)) < res)
				res = abs(*(_begin + i) - *(_begin + j));
		}
	}
	return res;
}

Span & Span::operator=(const Span & src){
	_data = src._data;
	_size = src._size;
	return *this;
}