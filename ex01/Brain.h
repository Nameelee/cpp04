#ifndef BRAIN_H
# define BRAIN_H

# include <string>
# include <iostream>

class Brain {

    public://not protected. Because cat and dog will not be inherited this
        std::string idea[100];

    public:
        Brain();
        Brain(const Brain& copy);
        Brain& operator=(const Brain& assign);
        ~Brain();
};

#endif