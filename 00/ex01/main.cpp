#include "main.hpp"

bool	inputCheck(std::string input)
{
	int i = -1;
	if (input.empty())
		return false;
	while(input[++i])
	{
		if (input[i] == ' ' || !std::isalnum(input[i]))
			return false;
	}
	return true;
}

int main()
{

	phoneBook book;
	std::string input;

	std::cout << "This is a Phonebook. The only cmds are \"ADD\" \"SEARCH\" \"EXIT\" " << std::endl;
	std::cout << "Phonebook: ";
	while(std::getline(std::cin, input))
	{

		if(inputCheck(input))
		{
			if (input == "EXIT")
				return 0;
			else if (input == "ADD")
				book.addContact();
			else if (input == "S")
				book.searchContact();
		}
		std::cout << "Phonebook: ";
	}
	return 0;
}
