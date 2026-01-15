#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>

int main(void)
{
    std::cout << "\n===1. Subject Test (Polymorphism)===\n" << std::endl;

    //const Animal *meta = new Animal();
    const Animal *j      = new Dog();//This is upcasting. look below
    const Animal *i      = new Cat();

    std::cout << std::endl;

    std::cout << j-> getType() << " " << std::endl;
    std::cout << i-> getType() << " " << std::endl;
    i-> makeSound();
    j-> makeSound();
    //meta -> makeSound();

    std::cout << std::endl;

    delete i;
    delete j;
    //delete meta;

    return (0);
}
