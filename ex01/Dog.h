#ifndef DOG_H
# define DOG_H

# include <iostream>
# include <string>
# include "Animal.h"
# include "Brain.h"

class Dog : public Animal {

    private:
        Brain* brain;

    public:
        Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& assign);
        virtual ~Dog();

    public:
        void makeSound() const;
        Brain* getBrain() const {
            return this->brain;
        }
};

#endif