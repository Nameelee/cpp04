#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.h"

class FragTrap : public ClapTrap {

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &copy);
        FragTrap &operator=(const FragTrap &assign);
        ~FragTrap();

    public:
        void highFivesGuys(void);
};

#endif