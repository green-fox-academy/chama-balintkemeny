//
// Created by balintkemeny on 2019. 10. 10..
//

#ifndef EX01_DEVICES_PRINTER2D_H
#define EX01_DEVICES_PRINTER2D_H

#include "Printer.h"

class Printer2D : public Printer {
public:
    Printer2D(int sizeX, int sizeY);
    std::string getSize() override;
private:
    int _sizeX;
    int _sizeY;
};


#endif //EX01_DEVICES_PRINTER2D_H
