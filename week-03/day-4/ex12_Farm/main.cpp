#include <iostream>
#include "Farm.h"

int main() {
    Animal testAnimal1;
    Animal testAnimal2;

    Farm testFarm(10);

    testFarm.addAnimal(&testAnimal1);
    std::cout << "Number of animals on farm:" << testFarm.numberOfAnimals() << std::endl;
    testFarm.breed();
    testFarm.addAnimal(&testAnimal2);
    std::cout << "Number of animals on farm:" << testFarm.numberOfAnimals() << std::endl;
    testFarm.breed();
    std::cout << "Number of animals on farm:" << testFarm.numberOfAnimals() << std::endl;

    testFarm.feed(2);
    testFarm.slaughter();
    std::cout << "Number of animals on farm:" << testFarm.numberOfAnimals() << std::endl;

    testFarm.slaughter();
    std::cout << "Number of animals on farm:" << testFarm.numberOfAnimals() << std::endl;
    testFarm.slaughter();
    std::cout << "Number of animals on farm:" << testFarm.numberOfAnimals() << std::endl;
    testFarm.slaughter();

    return 0;
}