//
// Created by Kemény Bálint on 2019. 10. 01..
//

#ifndef EX03_FLYABLE_BIRD_H
#define EX03_FLYABLE_BIRD_H

#include "Flyable.h"
#include "EggLayer.h"

class Bird : public EggLayer, public Flyable {
public:
    explicit Bird(std::string name);
    static std::string peck();
    void land() override ;
    void fly() override ;
    void takeOff() override;
protected:
    int _beakLength;
};

#endif //EX03_FLYABLE_BIRD_H
