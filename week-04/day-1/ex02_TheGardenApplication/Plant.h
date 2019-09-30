//
// Created by Kemény Bálint on 2019. 09. 30..
//

#ifndef EX02_THEGARDENAPPLICATION_PLANT_H
#define EX02_THEGARDENAPPLICATION_PLANT_H

#include <string>

class Plant {
public:
    Plant();
    bool needsWatering();
    void waterPlant(double amount);
    std::string getName();
    std::string getType();

protected:
    std::string _name;
    std::string _type;
    double _waterLevel;
    double _waterNeed;
    double _absorbingAbility;
};


#endif //EX02_THEGARDENAPPLICATION_PLANT_H
