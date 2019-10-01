//
// Created by Kemény Bálint on 2019. 10. 01..
//

#ifndef EX02_ZOO_EGGLAYER_H
#define EX02_ZOO_EGGLAYER_H

#include "Animal.h"

class EggLayer : public Animal {
public:
    explicit EggLayer(std::string name);
    std::string breed() override;
};


#endif //EX02_ZOO_EGGLAYER_H
