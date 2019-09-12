#include <iostream>

int main() {

    //Draw a diamond
    int numberOfCycles = 0;
    int currentCycle = 1;
    int charactersInRow = 1;
    int maxCharactersInRow;
    int spacesInRow;
    char space = ' ';
    char star = '*';

    while (numberOfCycles % 2 == 0) {
        std::cout << "How many rows do you want in your diamond? Please enter an odd number:" << std::endl;
        std::cin >> numberOfCycles;
    }

    maxCharactersInRow = (numberOfCycles / 2 + 1) * 2 - 1;
    while (currentCycle <= (numberOfCycles / 2 + 1)) {
        spacesInRow = (maxCharactersInRow - charactersInRow) / 2;
        std::cout << std::string(spacesInRow, space);
        std::cout << std::string(charactersInRow, star);
        std::cout << std::string(spacesInRow, space) << std::endl;
        charactersInRow += 2;
        currentCycle++;
    }

    currentCycle = 1;
    charactersInRow = maxCharactersInRow - 2;
    while (currentCycle <= (numberOfCycles / 2)) {
        spacesInRow = (maxCharactersInRow - charactersInRow) / 2;
        std::cout << std::string(spacesInRow, space);
        std::cout << std::string(charactersInRow, star);
        std::cout << std::string(spacesInRow, space) << std::endl;
        charactersInRow -= 2;
        currentCycle++;
    }
    return 0;
}