#include "Animal.h"

Animal::Animal() : _hunger(50), _thirst(50) {}

void Animal::eat() {
    if (_hunger > 0) _hunger--;
}

void Animal::drink() {
    if (_thirst > 0) _thirst--;
}

void Animal::play() {
    _hunger++;
    _thirst++;
}

int Animal::getHunger() const {
    return _hunger;
}

int Animal::getThirst() const {
    return _thirst;
}
