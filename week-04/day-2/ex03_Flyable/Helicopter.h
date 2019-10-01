//
// Created by Kemény Bálint on 2019. 10. 01..
//

#ifndef EX03_FLYABLE_HELICOPTER_H
#define EX03_FLYABLE_HELICOPTER_H

#include "Vehicle.h"
#include "Flyable.h"

class Helicopter : public Vehicle, public Flyable {
public:
    explicit Helicopter(std::string name);
    void land() override;
    void takeOff() override;
    void fly() override;
    void start() override;
};


#endif //EX03_FLYABLE_HELICOPTER_H
