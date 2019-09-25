//
// Created by Kemény Bálint on 2019. 09. 25..
//

#ifndef EX10_PETROLSTATION_CAR_H
#define EX10_PETROLSTATION_CAR_H


class Car {
public:
    Car(int gasAmount, int capacity);
    bool isFull();
    void fill();
private:
    int _gasAmount;
    int _capacity;
};


#endif //EX10_PETROLSTATION_CAR_H
