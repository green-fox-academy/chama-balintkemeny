//
// Created by Kemény Bálint on 2019. 09. 25..
//

#include "Sharpie.h"

Sharpie::Sharpie(std::string color, float width) {
    _color = color;
    _width = width;
    _inkAmount = 100;
};

void Sharpie::use() {
    _inkAmount--;
};

float Sharpie::getInkAmount() const {
    return _inkAmount;
};
