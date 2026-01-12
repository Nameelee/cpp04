#include "Dog.h"
#include <iostream>

Dog::Dog () : Animal()
{
    this->_name = "Frag Robot";
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;

    std::cout << "FragTrap " << _name << " Constructor called" <<std::endl;
} 

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
    this->_name = name;
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << _name << " Constructor called" <<std::endl;
}  

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap Copy of " << _name << " Constructor called" <<std::endl;
}

//This is not a constructor but 'Assignment Operator' So I don't put ': ClapTrap()' at the end 
FragTrap& FragTrap::operator=(const FragTrap &assign)
{
    if (this != &assign) {
        ClapTrap::operator=(assign);// "부모님(ClapTrap) 부분은 부모님의 규칙대로 복사해주세요"라고 함수 호출
        std::cout << "FragTrap Copy Assignment Operator called" <<std::endl;       
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " Destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    if (this->_energyPoint == 0 || this->_hitPoint == 0)
    {
        std::cout << "FragTrap " << this->_name << " is too tired for high fives." << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->_name << " requests a positive high five! Give him five!" << std::endl;
} 

