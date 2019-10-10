//
// Created by balintkemeny on 2019. 10. 10..
//

#include "Copier.h"

Copier::Copier(int sizeX, int sizeY, int speed) : Printer2D(sizeX, sizeY), Scanner(speed) {}

void Copier::copy() {
    scan();
    print();
}
