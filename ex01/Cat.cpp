#include "Cat.h"
#include <iostream>

Cat::Cat () : Animal()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
} 

Cat::Cat(const Cat &copy) : Animal(copy)
{
    this->type  = copy.type;
    this->brain = new Brain(*copy.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& assign)
{
    if (this != &assign) {
        Animal::operator=(assign);

        if(this->brain)
            delete this->brain;
        this->brain = new Brain(*assign.brain);
        std::cout << "Cat Copy Assignment Operator called" <<std::endl;        
    }
    return *this;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << type << " Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Mew Mew!" << std::endl;
}
