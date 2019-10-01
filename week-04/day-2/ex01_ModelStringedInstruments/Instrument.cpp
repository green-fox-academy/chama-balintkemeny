//
// Created by Kemény Bálint on 2019. 10. 01..
//

#include "Instrument.h"

Instrument::Instrument(std::string name) : _name(name) {}

std::string Instrument::getName() {
    return _name;
}
