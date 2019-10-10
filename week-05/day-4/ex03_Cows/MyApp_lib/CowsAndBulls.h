//
// Created by balintkemeny on 2019. 10. 10..
//

#ifndef EX03_COWS_COWSANDBULLS_H
#define EX03_COWS_COWSANDBULLS_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

class CowsAndBulls {
public:
    void setTarget();
    void start();
    std::string guess(int guessedNum);
private:
    std::vector<int> _targetNum;
    std::vector<int> _guessedNum;
    bool _gameState;
    int _countGuess;
};


#endif //EX03_COWS_COWSANDBULLS_H
