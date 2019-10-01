//
// Created by Kemény Bálint on 2019. 10. 01..
//

#ifndef EX01_MODELSTRINGEDINSTRUMENTS_BASSGUITAR_H
#define EX01_MODELSTRINGEDINSTRUMENTS_BASSGUITAR_H

#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument {
public:
    BassGuitar();
    explicit BassGuitar(int numberOfStrings);
    std::string sound() override;
};


#endif //EX01_MODELSTRINGEDINSTRUMENTS_BASSGUITAR_H
