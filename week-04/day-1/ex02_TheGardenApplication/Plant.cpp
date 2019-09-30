//
// Created by Kemény Bálint on 2019. 09. 30..
//

#include "Plant.h"

Plant::Plant() : _absorbingAbility(0.0), _waterNeed(0), _waterLevel(0), _name("def"), _type("def") {}

bool Plant::needsWatering() {
    return _waterLevel < _waterNeed;
}

void Plant::waterPlant(double amount) {
    _waterLevel += _absorbingAbility * amount;
}

std::string Plant::getName() {
    return _name;
}

std::string Plant::getType() {
    return _type;
}
