//
// Created by Kemény Bálint on 2019. 10. 01..
//

#include "Bird.h"
#include <iostream>

Bird::Bird(std::string name) : EggLayer(name), _beakLength(5) {}

std::string Bird::peck() {
    return "The angry birdie pecks you!";
}

void Bird::takeOff() {
    std::cout << "The bird flaps its wings and takes off!" << std::endl;
}

void Bird::fly() {
    std::cout << "The birdie flaps its wings and flies!" << std::endl;
}

void Bird::land() {
    std::cout << "The birdie lands and tucks its wings!" << std::endl;
}
