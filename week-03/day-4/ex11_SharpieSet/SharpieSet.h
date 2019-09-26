//
// Created by Kemény Bálint on 2019. 09. 26..
//

#ifndef EX11_SHARPIESET_SHARPIESET_H
#define EX11_SHARPIESET_SHARPIESET_H

#include <vector>
#include "Sharpie.h"

class SharpieSet {
public:
    void addSharpie (Sharpie* sharpiePointer);
    int countUsable ();
    void removeTrash ();
private:
    std::vector<Sharpie*> _sharpieList;
};


#endif //EX11_SHARPIESET_SHARPIESET_H
