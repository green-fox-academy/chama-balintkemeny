//
// Created by balintkemeny on 2019. 10. 10..
//

#ifndef EX01_DEVICES_COPIER_H
#define EX01_DEVICES_COPIER_H

#include "Scanner.h"
#include "Printer2D.h"

class Copier : public Scanner, public Printer2D {
public:
    Copier(int sizeX, int sizeY, int speed);
    void copy();
};


#endif //EX01_DEVICES_COPIER_H
