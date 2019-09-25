//
// Created by Kemény Bálint on 2019. 09. 25..
//

#ifndef EX07_FLEETOFTHINGS_FLEET_H
#define EX07_FLEETOFTHINGS_FLEET_H

#include <vector>
#include <string>

#include "thing.h"

class Fleet
{
public:
    Fleet();

    void add(const Thing& thing);
    std::string toString();

private:
    std::vector<Thing> things;
};

#endif //EX07_FLEETOFTHINGS_FLEET_H
