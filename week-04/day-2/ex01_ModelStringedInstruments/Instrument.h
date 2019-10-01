//
// Created by Kemény Bálint on 2019. 10. 01..
//

#ifndef EX01_MODELSTRINGEDINSTRUMENTS_INSTRUMENT_H
#define EX01_MODELSTRINGEDINSTRUMENTS_INSTRUMENT_H

#include <string>

class Instrument {
public:
    explicit Instrument(std::string name);
    virtual void play()=0;
    std::string getName();
protected:
    std::string _name;
};


#endif //EX01_MODELSTRINGEDINSTRUMENTS_INSTRUMENT_H
