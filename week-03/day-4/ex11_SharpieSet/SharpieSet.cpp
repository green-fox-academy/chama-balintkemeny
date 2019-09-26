//
// Created by Kemény Bálint on 2019. 09. 26..
//

#include "SharpieSet.h"

void SharpieSet::addSharpie (Sharpie* sharpiePointer) {
    _sharpieList.push_back(sharpiePointer);
}

int SharpieSet::countUsable() {
    int count = 0;
    for (Sharpie* i : _sharpieList) {
        if (i->isUsable()) count++;
    }
    return count;
}

void SharpieSet::removeTrash() {
    for (unsigned int i = 0; i < _sharpieList.size(); ++i) {
        if (!_sharpieList[i]->isUsable()) {
            _sharpieList.erase(_sharpieList.begin() + i);
            i--;
        }
    }
}
