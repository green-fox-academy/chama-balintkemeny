#include <iostream>
#include <vector>

#include "domino.h"

std::vector<Domino> initializeDominoes()
{
    std::vector<Domino> dominoes;
    dominoes.push_back(Domino(5, 2));
    dominoes.push_back(Domino(4, 6));
    dominoes.push_back(Domino(1, 5));
    dominoes.push_back(Domino(6, 7));
    dominoes.push_back(Domino(2, 4));
    dominoes.push_back(Domino(7, 1));
    return dominoes;
}

int main(int argc, char* args[])
{
    std::vector<Domino> dominoes = initializeDominoes();
    // You have the list of Dominoes
    // Order them into one snake where the adjacent dominoes have the same numbers on their adjacent sides
    // eg: [2, 4], [4, 3], [3, 5] ...

    int match = dominoes[0].getValues().second;
    std::vector<unsigned int> dominoIndices;
    dominoIndices.push_back(0);

    for (unsigned int j = 1; j < dominoes.size(); ++j) {
        for (unsigned int i = 1; i < dominoes.size(); ++i) {
            if (dominoes[i].getValues().first == match) {
                dominoIndices.push_back(i);
                match = dominoes[i].getValues().second;
                break;
            }
        }
    }

    for (unsigned int k = 0; k < dominoIndices.size(); ++k) {
        std::cout << k + 1 << ". " << dominoes[dominoIndices[k]].toString() << std::endl;
    }

    return 0;
}