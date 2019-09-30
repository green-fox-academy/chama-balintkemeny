#include <iostream>
#include "Carrier.h"

int main() {
    F16 testA1;
    F16 testA2;
    F16 testA3;
    F35 testB1;
    F35 testB2;

    Carrier testCarrier(2000, 30);

    testCarrier.addAircraft(&testA1);
    testCarrier.addAircraft(&testA2);
    testCarrier.addAircraft(&testA3);
    testCarrier.addAircraft(&testB1);
    testCarrier.addAircraft(&testB2);

    testCarrier.fill();

    std::cout << testCarrier.getStatus();

    Carrier enemyCarrier(1000, 100);
    testCarrier.fight(enemyCarrier);

    std::cout << testCarrier.getStatus() << std::endl;
    std::cout << enemyCarrier.getStatus() << std::endl;

    return 0;
}