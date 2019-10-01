//
// Created by Kemény Bálint on 2019. 10. 01..
//

#ifndef EX01_MODELSTRINGEDINSTRUMENTS_VIOLIN_H
#define EX01_MODELSTRINGEDINSTRUMENTS_VIOLIN_H

#include "StringedInstrument.h"

class Violin : public StringedInstrument {
public:
    Violin();
    explicit Violin(int numberOfStrings);
    std::string sound() override;
};


#endif //EX01_MODELSTRINGEDINSTRUMENTS_VIOLIN_H
