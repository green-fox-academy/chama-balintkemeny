//
// Created by balintkemeny on 2019. 10. 09..
//

#include "TestCar.h"

TestCar::TestCar() : _gas(0) {}

void TestCar::drive() {
    _gas -= 5;
}

void TestCar::refill() {
    _gas = 100;
}

int TestCar::getGas() {
    return _gas;
}
