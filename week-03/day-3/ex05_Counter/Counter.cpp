//
// Created by Kemény Bálint on 2019. 09. 25..
//

#include "Counter.h"

Counter::Counter() {
    _value = 0;
    _initValue = 0;
}

Counter::Counter(int value) {
    _value = value;
    _initValue = value;
}

void Counter::add() {
    _value++;
}

void Counter::add(int addendum) {
    _value += addendum;
}

int Counter::get() {
    return _value;
}

void Counter::reset() {
    _value = _initValue;
}