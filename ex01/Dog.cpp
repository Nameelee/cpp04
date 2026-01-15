#include "Dog.h"
#include <iostream>

Dog::Dog () : Animal()
{
    this->type = "Dog";
    this->brain = new Brain();//as subject sheet says
    std::cout << type << " constructor called" << std::endl;
} 

Dog::Dog(const Dog &copy) : Animal(copy)
{
    //*this = copy;   this is shallow copy
    this->type = copy.type;//this is deep copy
    this->brain = new Brain(*copy.brain);//*****************see below 1)
    std::cout << type << " copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& assign)
{
    if (this != &assign) {
        Animal::operator=(assign);
        if (this->brain)//********************see below 2) 
            delete this->brain;
        this->brain = new Brain(*assign.brain);
        std::cout << "Dog Copy Assignment Operator called" <<std::endl; 
    }
    return *this;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << type << " Destructor called" << std::endl;
}

void Dog::makeSound() const//'const' here mean: you can't change anything
{
    std::cout << "Woof Woof!" << std::endl;
}

/*
1)
this->brain = new Brain(*copy.brain);
    that call  
Brain::Brain(const Brain& copy) {
    *this = copy; // <--- 여기가 핵심!

    and that call

    Brain& Brain::operator=(const Brain& assign) {
    if (this != &assign) {
        // 드디어 여기서 실제 복사가 일어납니다!
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = assign.ideas[i];
        }      
    }
    return *this;
}

So you only see 'this->brain = new Brain(*copy.brain);' 
that works a lot. 


2)
    if (this->brain)
        delete this->brain;

pointer can't be changed like normal value. 
When you got pointer, you just got some room(memory) and just random value that 'points' that memory
it is just paper with number. You can't change. And if you lose that, there will be no way to approach that

that's why 
it didn't change the value, just delete and make new. 
 */