//
// Created by Kemény Bálint on 2019. 09. 26..
//

#ifndef EX12_FARM_FARM_H
#define EX12_FARM_FARM_H

#include "Animal.h"
#include <vector>

class Farm {
public:
    explicit Farm(int capacity);
    ~Farm();
    void addAnimal(Animal *animalPointer);
    void breed();
    void feed(int index);
    void slaughter();
    int numberOfAnimals();
private:
    int _capacity;
    std::vector<Animal*> _animalList;
};


#endif //EX12_FARM_FARM_H
