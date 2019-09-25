//
// Created by Kemény Bálint on 2019. 09. 25..
//

#include "Station.h"
#include <iostream>

Station::Station(int gasAmount) {
    _gasAmount = gasAmount;
}

void Station::fill(Car& car) {
    while(!car.isFull()) {
        if (_gasAmount < 1) {
            std::cout << "Not enough fuel in station!" << std::endl;
            break;
        }
        car.fill();
        _gasAmount--;
        std::cout << "Filling car!" << std::endl;
    }
    std::cout << "Remaining gas in station: " << _gasAmount << std::endl;
}
