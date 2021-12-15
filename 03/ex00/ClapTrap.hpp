//
// Created by Felipe Cody on 12/9/21.
//

#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP
#include <iostream>

class ClapTrap{
    private:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;
    public:
                ClapTrap();
                ClapTrap(const std::string name);
                ~ClapTrap();
        void    attack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        ClapTrap& operator=(const ClapTrap& right);
        
};

#endif
