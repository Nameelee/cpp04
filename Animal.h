#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class Animal {

    protected:
        std::string type;

    public:
        Animal();
        Animal(const Animal& copy);
        Animal& operator=(const Animal& assign);
        virtual ~Animal();

        virtual void makeSound()const;
        std::string getType() const;
};

#endif