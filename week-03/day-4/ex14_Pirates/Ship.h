//
// Created by Kemény Bálint on 2019. 09. 26..
//

#ifndef EX14_PIRATES_SHIP_H
#define EX14_PIRATES_SHIP_H

#include "Pirate.h"
#include <vector>

class Ship {
public:
    explicit Ship(int capacity);
    void fillShip();
private:
    int _capacity;
    std::vector<Pirate*> _crewList;
    Pirate* _captain;
};


#endif //EX14_PIRATES_SHIP_H
