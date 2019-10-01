//
// Created by Kemény Bálint on 2019. 10. 01..
//

#ifndef EX02_ZOO_ANIMAL_H
#define EX02_ZOO_ANIMAL_H

#include <string>

enum class Gender {
    MALE,
    FEMALE
};

class Animal {
public:
    explicit Animal(std::string name);
    std::string getName();
    virtual std::string breed()=0;
protected:
    std::string _name;
    int _age;
    Gender _gender;
    bool _isAlive;
};


#endif //EX02_ZOO_ANIMAL_H
