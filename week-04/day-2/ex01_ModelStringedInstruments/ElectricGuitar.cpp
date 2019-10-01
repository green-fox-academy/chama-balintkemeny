//
// Created by Kemény Bálint on 2019. 10. 01..
//

#include "ElectricGuitar.h"

ElectricGuitar::ElectricGuitar() : StringedInstrument(6, "Electric Guitar") {}

ElectricGuitar::ElectricGuitar(int numberOfStrings) : StringedInstrument(numberOfStrings, "Electric Guitar") {}

std::string ElectricGuitar::sound() {
    return "Twang";
}
