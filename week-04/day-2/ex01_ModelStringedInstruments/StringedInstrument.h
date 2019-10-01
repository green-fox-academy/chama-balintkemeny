//
// Created by Kemény Bálint on 2019. 10. 01..
//

#ifndef EX01_MODELSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H
#define EX01_MODELSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H

#include "Instrument.h"

class StringedInstrument : public Instrument {
public:
    explicit StringedInstrument(int numberOfStrings, std::string name);
    virtual std::string sound()=0;
    void play() override;
protected:
    int _numberOfStrings;
};


#endif //EX01_MODELSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H
