//
// Created by Kemény Bálint on 2019. 09. 30..
//

#include "Flower.h"

Flower::Flower(std::string name) : Plant() {
    _name = name;
    _type = "flower";
    _absorbingAbility = 0.75;
    _waterNeed = 5.0;
    _waterLevel = 0;
}
