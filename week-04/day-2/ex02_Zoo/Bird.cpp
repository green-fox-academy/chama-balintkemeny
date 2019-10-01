//
// Created by Kemény Bálint on 2019. 10. 01..
//

#include "Bird.h"

Bird::Bird(std::string name) : EggLayer(name), _beakLength(5) {}

std::string Bird::peck() {
    return "The angry birdie pecks you!";
}
