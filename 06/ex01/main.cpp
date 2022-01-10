//
// Created by Felipe Cody on 12/9/21.
//
#include <iostream>

struct Data{
	int n;
};

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	unsigned long long serializeResult;
	Data *data1 = new Data;
	Data *deserializeResult;
	data1->n = 42;

	serializeResult = serialize(data1);
	deserializeResult = deserialize(serializeResult);
	std::cout << "data1 ptr address:" << &data1 << "\ndata1 address:" << data1 << "\ndata1 n value:" << data1->n  <<  std::endl;
	std::cout << "\ndeserializeResult ptr address: " << &deserializeResult << "\ndeserializeResult address: " << deserializeResult << "\ndeserializeResult n value:" << deserializeResult->n <<  std::endl;
}