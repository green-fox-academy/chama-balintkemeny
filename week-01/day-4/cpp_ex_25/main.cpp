#include <iostream>

int main() {

    int storedNumber = 11;
    int guessedNumber;

    do {
        std::cout << "Guess a whole number:" << std::endl;
        std::cin >> guessedNumber;

        if (guessedNumber < storedNumber) {
            std::cout << "The stored number is higher!" << std::endl;
        } else if (guessedNumber > storedNumber) {
            std::cout << "The stored number is lower!" << std::endl;
        } else {
            std::cout << "You found the number: " << guessedNumber << std::endl;
        }
    } while (guessedNumber != storedNumber);

    return 0;
}