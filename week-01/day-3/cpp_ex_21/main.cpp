#include <iostream>

int main() {

    //Draw a pyramid
    int currentCycle = 1;
    int numberOfCycles;
    int charactersInRow = 1;
    int maxCharactersInRow;
    int numberOfSpaces;
    char star = '*';
    char space = ' ';

    std::cout << "How many rows do you want in your pyramid?" << std::endl;
    std::cin >> numberOfCycles;
    maxCharactersInRow = numberOfCycles * 2 - 1;

    while (currentCycle <= numberOfCycles) {
        numberOfSpaces = (maxCharactersInRow - charactersInRow) / 2;
        std::cout << std::string(numberOfSpaces, space);
        std::cout << std::string(charactersInRow, star);
        std::cout << std::string(numberOfSpaces, space) << std::endl;
        charactersInRow += 2;
        currentCycle++;
    }

    return 0;
}