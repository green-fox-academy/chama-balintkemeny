//
// Created by Kemény Bálint on 2019. 10. 01..
//

#include <iostream>
#include "StringedInstrument.h"

StringedInstrument::StringedInstrument(int numberOfStrings, std::string name) : Instrument(name),
                                                                                _numberOfStrings(numberOfStrings) {}

void StringedInstrument::play() {
    std::cout << getName() << ", a " << _numberOfStrings << "-stringed instrument that goes " << sound()
              << "." << std::endl;
}
