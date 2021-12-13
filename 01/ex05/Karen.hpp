//
// Created by Felipe Cody on 12/9/21.
//

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <iomanip>

class Karen
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Karen();
	~Karen();
	void complain(std::string level);
};

#endif