//
// Created by balintkemeny on 2019. 10. 10..
//

#include "CowsAndBulls.h"

void CowsAndBulls::setTarget() {
    _targetNum.push_back(rand() % 9 + 1);
    _targetNum.push_back(rand() % 10 + 0);
    _targetNum.push_back(rand() % 10 + 0);
    _targetNum.push_back(rand() % 10 + 0);
}

void CowsAndBulls::start() {
    setTarget();
    _gameState = true;

    while (_gameState) {
        int currentGuess;
        std::cout << "Guess a 4 digit number: " << std::endl;
        std::cin >> currentGuess;
        std::cout << guess(currentGuess);
    }
}

std::string CowsAndBulls::guess(int guessedNum) {
    if (!_gameState) {
        return std::string("The game is finished, call the start() function to start a new game \n");
    }

    _countGuess++;
    int cows = 0;
    int bulls = 0;
    int thousands = guessedNum / 1000;
    int hundreds = (guessedNum - thousands * 1000) / 100;
    int tens = (guessedNum - thousands * 1000 - hundreds * 100) / 10;
    int ones = guessedNum - thousands * 1000 - hundreds * 100 - tens * 10;
    _guessedNum.push_back(thousands);
    _guessedNum.push_back(hundreds);
    _guessedNum.push_back(tens);
    _guessedNum.push_back(ones);

    for (int i = 0; i < 4; ++i) {
        if (_guessedNum[i] == _targetNum[i]) {
            cows++;
        } else {
            for (int j = 0; j < 4; ++j) {
               if (_guessedNum[i] == _targetNum[j] && i != j) {
                   bulls++;
               }
            }
        }
    }

    if (cows == 4) {
        _gameState = false;
        return std::string("Congratulations, you've guessed the correct number in " + std::to_string(_countGuess) + "guesses. \n");
    } else {
        return std::string(std::to_string(cows) + " cow(s), " + std::to_string(bulls) + " bull(s)\n");
    }
}
