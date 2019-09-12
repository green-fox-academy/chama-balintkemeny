#include <iostream>

int main() {

    //Draw a chess board
    char space = ' ';
    char percentageSymbol = '%';
    int currentCycle = 0;
    std::string evenRow;
    std::string oddRow;

    while (currentCycle < 4) {
        evenRow += percentageSymbol;
        evenRow += space;
        oddRow += space;
        oddRow += percentageSymbol;
        currentCycle++;
    }

    currentCycle = 0;
    while (currentCycle < 8) {
        if (currentCycle % 2 == 0) {
            std::cout << evenRow << std::endl;
        } else {
            std::cout << oddRow << std::endl;
        }
        currentCycle++;
    }
    return 0;
}