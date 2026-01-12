#include "Animal.h"

Animal::Animal() {
    std::cout << "Animal " << " Constructor called" <<std::endl;
} 

Animal::Animal(const Animal& copy) {
    std::cout << "Animal Copy of " << " Constructor called" <<std::endl;
}

Animal& Animal::operator=(const Animal& assign) {
    if (this != &assign) {
        this->type = assign.type;
        std::cout << "Animal Copy Assignment Operator called" <<std::endl;       
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal " << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (_energyPoint == 0 || _hitPoint == 0) {
        std::cout << "ClapTrap " << _name << " cannot attack (No HP or low energy level)." << std::endl;
        return;
    }
    _energyPoint--;
    std::cout << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " point of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoint == 0 || _hitPoint == 0) {
        std::cout << "ClapTrap " << _name << " cannot repair (No HP or low energy level)." << std::endl;
        return;
    }
    _energyPoint--;
    _hitPoint += amount;
    std::cout << "ClapTrap " << _name << " repair itself, gaining " << amount << " HP!" << std::endl;
}