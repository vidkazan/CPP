//
// Created by Felipe Cody on 12/9/21.
//

#include    "main.hpp"

std::string toUpperStr(char *string)
{
	std::string res;
	int i = -1;
	while(string[++i])
	{
		if(string[i] > 96 && string[i] < 123)
			string[i] -= 32;
		res+=string[i];
	}
	return res;
}

static bool check(const  std::string& filename,const  std::string& arg2,const std::string& arg3,const  std::ifstream& inputFile)
{
	if(filename.empty() || arg2.empty() || arg3.empty()){
		std::cerr << "Empty argument(s)" << std::endl;
		return false;
	}
	if(!inputFile.good() || !inputFile.is_open() || inputFile.eof() || inputFile.bad()){
		std::cerr << "File error" << std::endl;
		return false;
	}
	return true;
}


int main(int ac, char **av){
	std::string res;
	size_t pos;
	std::string str;

	if(ac != 4){
		std::cerr<< "Usage: ./replacer Filename StringToReplace StringReplacer" << std::endl;
		return 1;
	}
	const std::string filename  = av[1];
	const std::string arg2  = av[2];
	const std::string arg3 = av[3];

	std::ifstream inputFile(av[1], std::ios::in);
	if(!check(filename, arg2, arg3, inputFile)){
		return 1;
	}
	const std::string filenameNew = toUpperStr(av[1]) + ".replace";
	std::ofstream outfile(filenameNew, std::ios::out);
	while(std::getline(inputFile, str)){
		while (true){
			pos = str.find(av[2]);
			if (pos == std::string::npos){
				res+=str;
				break;
			}
			str.erase(pos, strlen(av[2]));
			str.insert(pos, av[3]);
		}
		res += "\n";
	}
	outfile << res;
	outfile.close();
	inputFile.close();
}