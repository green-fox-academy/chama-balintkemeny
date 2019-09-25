#include <iostream>
#include "Animal.h"

int main() {
    Animal doggo;
    std::cout << "Hunger: " << doggo.getHunger() << std::endl;
    std::cout << "Thirst: " << doggo.getThirst() << std::endl;

    doggo.eat();
    std::cout << "Doggo eats" << std::endl;
    std::cout << "Hunger: " << doggo.getHunger() << std::endl;
    std::cout << "Thirst: " << doggo.getThirst() << std::endl;

    doggo.drink();
    std::cout << "Doggo drinks" << std::endl;
    std::cout << "Hunger: " << doggo.getHunger() << std::endl;
    std::cout << "Thirst: " << doggo.getThirst() << std::endl;

    doggo.play();
    std::cout << "Doggo plays" << std::endl;
    std::cout << "Hunger: " << doggo.getHunger() << std::endl;
    std::cout << "Thirst: " << doggo.getThirst() << std::endl;


    return 0;
}