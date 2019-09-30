//
// Created by Kemény Bálint on 2019. 09. 30..
//

#include "F35.h"

F35::F35() : Aircraft() {
    _type = Type::F35;
    _maxAmmo = 12;
    _baseDmg = 50;
}
