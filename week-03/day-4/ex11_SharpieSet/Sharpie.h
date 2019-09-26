//
// Created by Kemény Bálint on 2019. 09. 26..
//

#ifndef EX11_SHARPIESET_SHARPIE_H
#define EX11_SHARPIESET_SHARPIE_H

#include <iostream>

class Sharpie {
public:
    Sharpie(std::string color, float width);
    void use ();
    bool isUsable ();
    int getInkAmount() const;

private:
    std::string _color;
    float _width;
    int _inkAmount;
};

#endif //EX11_SHARPIESET_SHARPIE_H
