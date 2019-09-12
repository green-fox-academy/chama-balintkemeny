#include <iostream>

int main() {

    //Draw a square
    int numberOfCycles = 0;
    int currentCycle = 1;
    char space = ' ';
    char percentageSymbol = '%';

    std::cout << "How many rows do you want in your square?" << std::endl;
    std::cin >> numberOfCycles;

    std::cout << std::string(numberOfCycles, percentageSymbol) << std::endl;

    while (currentCycle <= (numberOfCycles - 2)) {
        std::cout << std::string(1, percentageSymbol);
        std::cout << std::string(numberOfCycles - 2, space);
        std::cout << std::string(1, percentageSymbol) << std::endl;
        currentCycle++;
    }

    if (numberOfCycles > 1) {
        std::cout << std::string(numberOfCycles, percentageSymbol) << std::endl;
    }

    return 0;
}