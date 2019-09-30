//
// Created by Kemény Bálint on 2019. 09. 30..
//

#include "Carrier.h"
#include <iostream>

Carrier::Carrier(int hitPoints, int ammoStorage) : _hitPoints(hitPoints), _ammoStorage(ammoStorage), _aircrafts() {}

void Carrier::addAircraft(Aircraft *aircraftPtr) {
    _aircrafts.push_back(aircraftPtr);
}

void Carrier::fill() {
    std::cout << "Ammo in carrier before filling: " << _ammoStorage << std::endl;
    for (Aircraft* a : _aircrafts) {
        if (a->isPriority()) {
            if (_ammoStorage <= 0) {
                std::cout << "No ammo left in carrier!" << std::endl;
                break;
            } else {
                _ammoStorage = a->refill(_ammoStorage);
                std::cout << "Filled aircraft: " << a->getStatus() << std::endl;
                std::cout << "Ammo left in carrier: " << _ammoStorage << std::endl;
            }
        }
    }
    for (Aircraft* b : _aircrafts) {
        if (!b->isPriority()) {
            if (_ammoStorage <= 0) {
                std::cout << "No ammo left in carrier!" << std::endl;
                break;
            } else {
                _ammoStorage = b->refill(_ammoStorage);
                std::cout << "Filled aircraft: " << b->getStatus() << std::endl;
                std::cout << "Ammo left in carrier: " << _ammoStorage << std::endl;
            }
        }
    }
}

std::string Carrier::getStatus() {
    std::string output;
    if (_hitPoints > 0) {
        output = "HP: " + std::to_string(_hitPoints) + ", Aircraft count: " + std::to_string(_aircrafts.size())
                 + ", Ammo storage: " + std::to_string(_ammoStorage) + ", Total damage: " + std::to_string(getDamage())
                 + "\n";

        for (Aircraft* b : _aircrafts) {
            output += b->getStatus() + "\n";
        }
    } else {
        output = "It's dead Jim! :(";
    }

    return output;
}

int Carrier::getDamage() {
    int totalDamage = 0;
    for (Aircraft* a : _aircrafts) {
        totalDamage += a->getDamage();
    }
    return totalDamage;
}

void Carrier::fight(Carrier &otherCarrier) {
    int dmg = 0;
    for (Aircraft* a : _aircrafts) {
        dmg += a->fight();
    }
    otherCarrier._hitPoints -= dmg;
    std::cout << "You've caused " << dmg << " points of damage to the enemy carrier." << std::endl;
    std::cout << "The enemy carrier has " << otherCarrier._hitPoints << " HP left." << std::endl;
    if (otherCarrier._hitPoints <= 0) {
        std::cout << "You've sunk the enemy carrier!" << std::endl;
    }
}
