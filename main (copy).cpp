#include "FragTrap.h"
#include <iostream>

int main(void)
{
    FragTrap a("Dalek");

    a.attack("Target");
    a.takeDamage(50);
    a.beRepaired(20);
    a.highFivesGuys();
    
    return (0);
}