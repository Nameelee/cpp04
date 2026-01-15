#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>

#define N_ANIMALS 4

int main(void)
{
    std::cout << "\n===1. Array Test (Polymorphism & Loop)===\n" << std::endl;

    Animal* animals[N_ANIMALS];

    for (int i = 0; i < N_ANIMALS; i++) {
        if (i < N_ANIMALS / 2) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }
    std::cout << std::endl;

    for (int i = 0; i < N_ANIMALS; i++) {
        delete animals[i];
    }

    std::cout << "\n========== 2. Deep Copy Test ==========\n" << std::endl;

    Dog* dog1 = new Dog();//original

    dog1->getBrain()->idea[0] = "I am the original dog.";
    std::cout << "Original Dog's Idea: " << dog1->getBrain()->idea[0] << std::endl;

    Dog* dog2 = new Dog(*dog1);//deep copy

    std::cout << "\nDog2 bark" << std::endl;
    dog2->makeSound();
    std::cout << "Copy Dog's Idea: " << dog2->getBrain()->idea[0] << std::endl;

    std::cout << "\n========== 2-1. Deep Copy Test - Change the idea ==========\n" << std::endl;

    dog1->getBrain()->idea[0] = "That doesn't really matter.";
    std::cout << "Original Dog's Idea: " << dog1->getBrain()->idea[0] << std::endl;
    std::cout << "Copy Dog's Idea: " << dog2->getBrain()->idea[0] << std::endl;

    std::cout << "\nDeleting Original Dog" << std::endl;
    delete dog1;//to check copy of dog2 is ok after deleting dog1

    std::cout << "\nDeleting Copy Dog" << std::endl;
    delete dog2; 
    return (0);
}

/*
// Animal* 하나로 개와 고양이를 동시에 관리 가능 (매우 효율적)
Animal* zoo[2];

zoo[0] = new Dog(); // Dog -> Animal* (업캐스팅)
zoo[1] = new Cat(); // Cat -> Animal* (업캐스팅)

***what you learn here:deep copy***

Shallow copy: Making DogB with copying DogA
-just deliver the pointr address of DogA's brain to DogB
-> DogA and DogB shares brains
-> Si on supprimer DogA, then DogB will no have any brain.

Deep copy:For same example
-make new object for new brain for DogB
*/