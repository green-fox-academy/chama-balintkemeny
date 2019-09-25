//
// Created by Kemény Bálint on 2019. 09. 25..
//

#ifndef EX08_DICESET_DICE_SET_H
#define EX08_DICESET_DICE_SET_H

#include <iostream>
#include <vector>

class DiceSet
{
public:

    DiceSet();

    void roll();
    void roll(int i);
    std::vector<int> getCurrent() const;
    int getCurrent(int i) const;
private:
    std::vector<int> dices;
};

#endif //EX08_DICESET_DICE_SET_H
