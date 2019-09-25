//
// Created by Kemény Bálint on 2019. 09. 25..
//

#ifndef EX04_SHARPIE_SHARPIE_H
#define EX04_SHARPIE_SHARPIE_H

#include <iostream>


class Sharpie {
public:
    Sharpie(std::string color, float width);
    void use ();
    float getInkAmount() const;

private:
    std::string _color;
    float _width;
    float _inkAmount;
};


#endif //EX04_SHARPIE_SHARPIE_H
