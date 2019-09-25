#include <iostream>
#include "Station.h"

int main() {

    Station shellStation(100);
    Car vwGolf(10, 50);
    Car hondaCivic(50,60);
    Car toyotaCorolla(2, 60);
    Car landRover(30, 100);
    Car peugeot207(40, 60);

    shellStation.fill(vwGolf);
    shellStation.fill(hondaCivic);
    shellStation.fill(toyotaCorolla);
    shellStation.fill(landRover);
    shellStation.fill(peugeot207);

    return 0;
}