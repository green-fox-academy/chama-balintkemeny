//
// Created by Kemény Bálint on 2019. 10. 01..
//

#ifndef EX02_ZOO_BIRD_H
#define EX02_ZOO_BIRD_H

#include "EggLayer.h"

class Bird : public EggLayer {
public:
    explicit Bird(std::string name);

    static std::string peck();
protected:
    int _beakLength;
};


#endif //EX02_ZOO_BIRD_H
