#include "Sharpie.h"

Sharpie::Sharpie(std::string color, float width) {
    _color = color;
    _width = width;
    _inkAmount = 100;
};

void Sharpie::use() {
    _inkAmount--;
    if (_inkAmount < 1) _inkAmount = 0;
};

bool Sharpie::isUsable () {
    return _inkAmount > 0;
}

int Sharpie::getInkAmount() const {
    return _inkAmount;
};
