#include <iostream>

int main() {

    //Draw diagonal
    int numberOfCycles = 0;
    int currentCycle = 1;
    int charactersInRow = 1;
    int maxCharactersInRow;
    int spacesInRow;
    char space = ' ';
    char percentageSymbol = '%';

    std::cout << "How many rows do you want in your square with an added diagonal?" << std::endl;
    std::cin >> numberOfCycles;

    std::cout << std::string(numberOfCycles, percentageSymbol) << std::endl;

    while (currentCycle <= (numberOfCycles - 2)) {
        int frontSpaces = currentCycle - 1;
        int remainingSpaces = numberOfCycles - (frontSpaces + 3);

        std::cout << std::string(1, percentageSymbol);
        std::cout << std::string(frontSpaces, space);
        std::cout << std::string (1, percentageSymbol);
        std::cout << std::string(remainingSpaces, space);
        std::cout << std::string(1, percentageSymbol) << std::endl;
        currentCycle++;
    }

    if (numberOfCycles > 1) {
        std::cout << std::string(numberOfCycles, percentageSymbol) << std::endl;
    }
    return 0;
}