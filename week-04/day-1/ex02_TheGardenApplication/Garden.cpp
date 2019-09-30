//
// Created by Kemény Bálint on 2019. 09. 30..
//
#include <iostream>
#include "Garden.h"

Garden::Garden() : _plants() {}

void Garden::addPlant(Plant *plantPtr) {
    _plants.push_back(plantPtr);
}

void Garden::waterPlants(double amount) {
    std::cout << "Watering with " << amount << std::endl;
    int numberOfWateredPlants = 0;
    for (Plant* p : _plants) {
        if (p->needsWatering() == 1) {
            numberOfWateredPlants++;
        }
    }
    double waterPerPlant = amount / (double)numberOfWateredPlants;
    for (Plant* p : _plants) {
        if (p->needsWatering() == 1) {
            p->waterPlant(waterPerPlant);
        }
    }
    info();
}

void Garden::info() {
    for (Plant* p : _plants) {
        if (p->needsWatering() == 1) {
            std::cout << "The " << p->getName() << " " << p->getType() << " needs water." << std::endl;
        } else {
            std::cout << "The " << p->getName() << " " << p->getType() << " doesn't need water." << std::endl;
        }
    }
}
