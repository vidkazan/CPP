//
// Created by Felipe Cody on 12/9/21.
//

#ifndef  AMateria_HPP
#define  AMateria_HPP
#include <iostream>
#include <iomanip>

class  AMateria{
    protected:
		std::string _type;
		AMateria();
		AMateria(std::string const & type);
	public:
		virtual ~AMateria();
        AMateria& operator=(AMateria const & src);

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif