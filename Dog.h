#ifndef DOG_H
# define DOG_H

# include <iostream>
# include <string>
# include "Animal.h"

class Dog : public Animal {

    public:
        Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& assign);
        ~Dog();

    public:
        void makeSound() const;
};

#endif