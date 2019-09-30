//
// Created by Kemény Bálint on 2019. 09. 30..
//

#include "F16.h"

F16::F16() : Aircraft() {
    _type = Type::F16;
    _maxAmmo = 8;
    _baseDmg = 30;
}
