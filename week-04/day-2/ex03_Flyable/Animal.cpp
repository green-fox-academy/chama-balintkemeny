//
// Created by Kemény Bálint on 2019. 10. 01..
//

#include "Animal.h"

Animal::Animal(std::string name) : _name(name), _age(1), _gender(Gender::FEMALE), _isAlive(true) {}

std::string Animal::getName() {
    return _name;
}
