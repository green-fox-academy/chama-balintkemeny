//
// Created by Kemény Bálint on 2019. 09. 25..
//

#include "Animal.h"

Animal::Animal() {
    hunger = 50;
    thirst = 50;
}

void Animal::eat() {
    hunger--;
}

void Animal::drink() {
    thirst--;
}

void Animal::play() {
    hunger++;
    thirst++;
}

int Animal::getHunger() const {
    return hunger;
}

int Animal::getThirst() const {
    return thirst;
}
