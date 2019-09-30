//
// Created by Kemény Bálint on 2019. 09. 30..
//

#ifndef EX03_AIRCRAFTCARRIER_CARRIER_H
#define EX03_AIRCRAFTCARRIER_CARRIER_H

#include <vector>
#include "F16.h"
#include "F35.h"

class Carrier {
public:
    Carrier(int hitPoints, int ammoStorage);
    void addAircraft(Aircraft* aircraftPtr);
    void fill();
    std::string getStatus();
    void fight(Carrier &otherCarrier);

private:
    int getDamage();
    std::vector<Aircraft*> _aircrafts;
    int _hitPoints;
    int _ammoStorage;
};


#endif //EX03_AIRCRAFTCARRIER_CARRIER_H
