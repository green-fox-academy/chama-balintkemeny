//
// Created by Kemény Bálint on 2019. 10. 01..
//

#ifndef EX03_FLYABLE_VEHICLE_H
#define EX03_FLYABLE_VEHICLE_H

#include <string>

class Vehicle {
public:
    explicit Vehicle(std::string name);
    Vehicle(std::string name, int maxSpeed, int weight, int maxFuel);
    virtual void start()=0;
private:
    std::string _name;
    int _maxSpeed;
    int _weight;
    int _maxFuel;
};


#endif //EX03_FLYABLE_VEHICLE_H
