//
// Created by balintkemeny on 2019. 10. 09..
//

#ifndef EX01_GTEST_PRACTICE_TESTCAR_H
#define EX01_GTEST_PRACTICE_TESTCAR_H


class TestCar {
public:
    TestCar();
    void drive();
    void refill();
    int getGas();
private:
    int _gas;
};


#endif //EX01_GTEST_PRACTICE_TESTCAR_H
