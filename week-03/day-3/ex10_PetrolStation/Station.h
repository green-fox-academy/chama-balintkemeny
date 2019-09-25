//
// Created by Kemény Bálint on 2019. 09. 25..
//

#ifndef EX10_PETROLSTATION_STATION_H
#define EX10_PETROLSTATION_STATION_H

#include <iostream>
#include "Car.h"

class Station {
public:
    Station (int gasAmount);
    void fill(Car& car);
private:
    int _gasAmount;
};


#endif //EX10_PETROLSTATION_STATION_H
