//
// Created by Kemény Bálint on 2019. 10. 01..
//

#include "EggLayer.h"

EggLayer::EggLayer(std::string name) : Animal(name) {}

std::string EggLayer::breed() {
    return "laying eggs";
}