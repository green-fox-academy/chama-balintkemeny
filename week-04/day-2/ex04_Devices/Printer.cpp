//
// Created by Kemény Bálint on 2019. 10. 01..
//

#include "Printer.h"
#include <iostream>

void Printer::print() {
    std::cout << "I'm printing something that's " << getSize() << "cm." << std::endl;
}
