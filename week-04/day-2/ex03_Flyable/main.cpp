#include <iostream>
#include "Bird.h"
#include "Helicopter.h"


int main() {
    Helicopter testHeli("Apache");
    testHeli.start();
    testHeli.takeOff();
    testHeli.fly();
    testHeli.land();

    Bird testBird("Eagle");
    testBird.takeOff();
    testBird.fly();
    testBird.land();

    return 0;
}