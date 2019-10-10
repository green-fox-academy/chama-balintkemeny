//
// Created by balintkemeny on 2019. 10. 10..
//

#include "Printer2D.h"

Printer2D::Printer2D(int sizeX, int sizeY) : _sizeX(sizeX), _sizeY(sizeY) {}

std::string Printer2D::getSize() {
    return std::string(std::to_string(_sizeX) + " x " + std::to_string(_sizeY));
}
