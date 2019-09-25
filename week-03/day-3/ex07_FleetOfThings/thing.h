//
// Created by Kemény Bálint on 2019. 09. 25..
//

#ifndef EX07_FLEETOFTHINGS_THING_H
#define EX07_FLEETOFTHINGS_THING_H

#include <string>

class Thing
{
public:
    Thing(const std::string& name);

    void complete();
    std::string toString();

private:
    std::string _name;
    bool _completed;
};

#endif //EX07_FLEETOFTHINGS_THING_H
