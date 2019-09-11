#include <iostream>

int main() {

    int printedNumber = 0;

    while (printedNumber <= 500) {
        std::cout << printedNumber << std::endl;
        printedNumber += 2;
    }

    return 0;
}