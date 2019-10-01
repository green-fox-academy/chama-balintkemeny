//
// Created by Kemény Bálint on 2019. 10. 01..
//

#ifndef EX03_FLYABLE_EGGLAYER_H
#define EX03_FLYABLE_EGGLAYER_H

#include "Animal.h"

class EggLayer : public Animal {
public:
    explicit EggLayer(std::string name);
    std::string breed() override;
};

#endif //EX03_FLYABLE_EGGLAYER_H
