#ifndef EX09_DOMINOES_DOMINO_H
#define EX09_DOMINOES_DOMINO_H

#include <iostream>
#include <utility>

class Domino
{
public:
    Domino(int valueA, int valueB);

    std::pair<int,int> getValues();
    std::string toString();

private:
    std::pair<int,int> _values;
};

#endif //EX09_DOMINOES_DOMINO_H
