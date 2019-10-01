//
// Created by Kemény Bálint on 2019. 10. 01..
//

#ifndef EX01_MODELSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H
#define EX01_MODELSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H

#include "StringedInstrument.h"

class ElectricGuitar : public StringedInstrument {
public:
    ElectricGuitar();
    explicit ElectricGuitar(int numberOfStrings);
    std::string sound() override;
};


#endif //EX01_MODELSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H
