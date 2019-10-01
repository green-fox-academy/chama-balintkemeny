//
// Created by Kemény Bálint on 2019. 10. 01..
//

#ifndef EX02_ZOO_MAMMAL_H
#define EX02_ZOO_MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {
public:
    explicit Mammal(std::string name);
    std::string breed() override;
};


#endif //EX02_ZOO_MAMMAL_H
