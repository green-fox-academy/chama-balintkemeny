//
// Created by Kemény Bálint on 2019. 09. 26..
//

#include "Ship.h"
#include <stdlib.h>
#include <time.h>

Ship::Ship(int capacity) : _capacity(capacity) {}

void Ship::fillShip() {
    srand (time(NULL));
    int random = rand() % (_capacity - _crewList.size() - 1) + 1;

}
