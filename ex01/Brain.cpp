#include "Brain.h"

Brain::Brain() {
    std::cout << "Brain Constructor called" <<std::endl;
} 

Brain::Brain(const Brain& copy) {
    *this = copy;
    std::cout << "Brain Copy Constructor called" <<std::endl;
}

Brain& Brain::operator=(const Brain& assign) {
    if (this != &assign) {
        //This is for the Deep copy
        for (int i = 0; i < 100; i++) {
            this->idea[i] = assign.idea[i];
        }      
    }
    std::cout << "Brain Copy Assignment Operator called" <<std::endl; 
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain Destructor called" << std::endl;
}
