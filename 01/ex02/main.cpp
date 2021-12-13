//
// Created by Felipe Cody on 12/9/21.
//

#include <iostream>
#include <iomanip>
int main()
{
    std::string str = "HI THIS IS BRAIN";
    
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout    << " string address by using"<<" &str " <<  &str << "\n " \
                << "string address by using"<<" &stringREF " <<  &stringREF << "\n " \
                << "string address by using"<<" stringPTR " <<  stringPTR << "\n\n " \
                << "string by using"<<" stringREF " <<  stringREF << "\n " \
                << "string by using"<<" *stringPTR " <<  *stringPTR << std::endl;
}
