//
// Created by Kemény Bálint on 2019. 10. 01..
//

#ifndef EX03_FLYABLE_FLYABLE_H
#define EX03_FLYABLE_FLYABLE_H

#include <string>

class Flyable {
public:
    virtual void land()=0;
    virtual void fly()=0;
    virtual void takeOff()=0;
};


#endif //EX03_FLYABLE_FLYABLE_H
