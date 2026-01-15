#include "Cat.h"
#include <iostream>

Cat::Cat () : Animal()
{
    this->type = "Cat";
    std::cout << type << " constructor called" << std::endl;
} 

Cat::Cat(const Cat &copy) : Animal(copy)
{
    *this = copy;
    std::cout << type << "Copy constructor called" <<std::endl;
}

Cat& Cat::operator=(const Cat& assign)
{
    if (this != &assign) {
        Animal::operator=(assign);
        std::cout << type << " Copy Assignment operator called" <<std::endl;       
    }
    return *this;
}

Cat::~Cat() {
    std::cout << type << " Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Mew Mew!" << std::endl;
}
