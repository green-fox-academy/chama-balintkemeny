//
// Created by Kemény Bálint on 2019. 09. 26..
//

#include "Farm.h"
#include <iostream>

Farm::Farm(int capacity) : _capacity(capacity) {}

void Farm::addAnimal(Animal *animalPointer) {
    if (_animalList.size() < _capacity) {
        _animalList.push_back(animalPointer);
        std::cout << "Animal added." << std::endl;
    } else {
        std::cout << "Your farm is full!" << std::endl;
    }
}

void Farm::breed() {
    if (_animalList.size() >= 2) {
        if (_animalList.size() < _capacity) {
            _animalList.push_back(new Animal());
            std::cout << "Congratulations, you've bred a new animal!" << std::endl;
        } else {
            std::cout << "Your farm is full!" << std::endl;
        }
    } else {
        std::cout << "Cannot breed animals without a pair." << std::endl;
    }
}

void Farm::feed(int index) {
    _animalList[index]->eat();
    std::cout << "Animal fed." << std::endl;
}

void Farm::slaughter() {
    if (!_animalList.empty()) {
        int minHunger = 1000;
        unsigned int leastHungryAnimal;
        for (unsigned int i = 0; i < _animalList.size(); ++i) {
            if (_animalList[i]->getHunger() < minHunger) {
                minHunger = _animalList[i]->getHunger();
                leastHungryAnimal = i;
            }
        }
        _animalList.erase(_animalList.begin() + leastHungryAnimal);
        std::cout << "Animal slaughtered. :(" << std::endl;
    } else {
        std::cout << "No animals left to slaughter. Go vegan." << std::endl;
    }
}

int Farm::numberOfAnimals() {
    return _animalList.size();
}

Farm::~Farm() {
    for (Animal* i : _animalList) {
        delete i;
    }
}
