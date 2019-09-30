//
// Created by Kemény Bálint on 2019. 09. 30..
//

#ifndef EX03_AIRCRAFTCARRIER_AIRCRAFT_H
#define EX03_AIRCRAFTCARRIER_AIRCRAFT_H

#include <string>

enum class Type {
    F16,
    F35,
    NA
};

class Aircraft {
public:
    Aircraft();
    int fight();
    int refill(int ammoRefill);
    std::string getType();
    std::string getStatus();
    bool isPriority();
    int getDamage();

protected:
    Type _type;
    int _currentAmmo;
    int _maxAmmo;
    int _baseDmg;
};


#endif //EX03_AIRCRAFTCARRIER_AIRCRAFT_H
