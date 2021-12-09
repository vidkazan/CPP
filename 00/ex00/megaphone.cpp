#include <iostream>

void toUpperStr(char *string)
{
	int i = -1;
	while(string[++i])
	{
		if(string[i] > 96 && string[i] < 123)
			string[i] -= 32;
	}
}

int main(int ac, char **av)
{
	int i = 0;

	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while(av[++i])
		{
			toUpperStr(av[i]);
			std::cout << av[i] << std::ends;
		}
		std::cout << "\n" << std::ends;
	}
	return 0;
}
