//
// Created by Kemény Bálint on 2019. 10. 01..
//

#include "Violin.h"

Violin::Violin() : StringedInstrument(4, "Violin") {}

Violin::Violin(int numberOfStrings) : StringedInstrument(numberOfStrings, "Violin") {}

std::string Violin::sound() {
    return "Screech";
}
