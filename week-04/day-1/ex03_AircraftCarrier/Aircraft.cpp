//
// Created by Kemény Bálint on 2019. 09. 30..
//

#include "Aircraft.h"
#include <iostream>

Aircraft::Aircraft() : _currentAmmo(0), _type(Type::NA), _baseDmg(0), _maxAmmo(0) {}

int Aircraft::fight() {
    int damage = _currentAmmo * _baseDmg;
    _currentAmmo = 0;
    return damage;
}

int Aircraft::refill(int ammoRefill) {
    if (ammoRefill <= _maxAmmo) {
        _currentAmmo = ammoRefill;
        return 0;
    } else {
        _currentAmmo = _maxAmmo;
        return ammoRefill - _maxAmmo;
    }
}

std::string Aircraft::getType() {
    switch(_type) {
        case Type::F16 : return "F16";
        case Type::F35 : return "F35";
        case Type::NA : return "N/A";
        default : return "error";
    }
}

std::string Aircraft::getStatus() {
    std::string output = "Type: " + getType() + ", Ammo: " + std::to_string(_currentAmmo) + ", Base Damage: "
            + std::to_string(_baseDmg) + ", All Damage: " + std::to_string(_currentAmmo * _baseDmg);
    return output;
}

bool Aircraft::isPriority() {
    switch(_type) {
        case Type::F16 : return false;
        case Type::F35 : return true;
        case Type::NA : return false;
        default : return false;
    }
}

int Aircraft::getDamage() {
    return _currentAmmo * _baseDmg;
}

