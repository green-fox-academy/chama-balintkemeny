//
// Created by Kemény Bálint on 2019. 10. 01..
//

#include "Helicopter.h"
#include <iostream>

Helicopter::Helicopter(std::string name) : Vehicle(name) {}

void Helicopter::start() {
    std::cout << "The rotors start spinning!" << std::endl;
}

void Helicopter::fly() {
    std::cout << "The heli flies!" << std::endl;
}

void Helicopter::takeOff() {
    std::cout << "The heli takes off!" << std::endl;
}

void Helicopter::land() {
    std::cout << "The heli lands!" << std::endl;
}
