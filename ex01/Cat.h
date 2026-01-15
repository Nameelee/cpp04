#ifndef CAT_H
# define CAT_H

# include <iostream>
# include <string>
# include "Animal.h"
# include "Brain.h"

class Cat : public Animal {

    private:
        Brain* brain;

    public:
        Cat();
        Cat(const Cat& copy);
        Cat& operator=(const Cat& assign);
        virtual ~Cat();

        void makeSound() const;
};

#endif