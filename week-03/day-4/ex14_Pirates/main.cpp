#include <iostream>
#include "Pirate.h"

int main() {
    Pirate testPirate1;
    Pirate testPirate2;

    std::cout << "TestPirate1's status: " << std::endl;
    testPirate1.getStatus();

    testPirate1.drinkSomeRum();
    std::cout << "TestPirate1's status: " << std::endl;
    testPirate1.getStatus();
    testPirate1.drinkSomeRum();
    testPirate1.howsItGoingMate();
    testPirate1.drinkSomeRum();
    testPirate1.drinkSomeRum();
    testPirate1.drinkSomeRum();
    testPirate1.howsItGoingMate();
    std::cout << "TestPirate1's status: " << std::endl;
    testPirate1.getStatus();

    testPirate1.awaken();
    std::cout << "TestPirate1's status: " << std::endl;
    testPirate1.getStatus();

    testPirate1.brawl(&testPirate2);
    std::cout << "TestPirate1's status: " << std::endl;
    testPirate1.getStatus();
    std::cout << "TestPirate2's status: " << std::endl;
    testPirate2.getStatus();




    return 0;
}