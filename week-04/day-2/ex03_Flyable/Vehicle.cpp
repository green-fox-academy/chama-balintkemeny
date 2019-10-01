//
// Created by Kemény Bálint on 2019. 10. 01..
//

#include "Vehicle.h"

Vehicle::Vehicle(std::string name) : _name(name), _maxSpeed(0), _maxFuel(0), _weight(0) {}

Vehicle::Vehicle(std::string name, int maxSpeed, int weight, int maxFuel) : _name(name), _maxSpeed(maxSpeed),
                                                                            _maxFuel(maxFuel), _weight(weight) {}
