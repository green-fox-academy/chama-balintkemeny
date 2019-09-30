//
// Created by Kemény Bálint on 2019. 09. 30..
//

#ifndef EX02_THEGARDENAPPLICATION_GARDEN_H
#define EX02_THEGARDENAPPLICATION_GARDEN_H

#include <vector>
#include "Flower.h"
#include "Tree.h"

class Garden {
public:
    Garden();
    void addPlant(Plant* plantPtr);
    void waterPlants(double amount);
    void info();
private:
    std::vector<Plant*> _plants;
};


#endif //EX02_THEGARDENAPPLICATION_GARDEN_H
