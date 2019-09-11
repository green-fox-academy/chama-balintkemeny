#include <iostream>

int main() {

    //One, Two or a Lot
    int inputNumber;
    std::cout << "Please enter an integer:";
    std::cin >> inputNumber;

    if (inputNumber <= 0) {
        std::cout << "Not enough!" << std::endl;
    } else if (inputNumber == 1) {
        std::cout << "One!" << std::endl;
    } else if (inputNumber == 2) {
        std::cout << "Two!" << std::endl;
    } else {
        std::cout << "A lot!" << std::endl;
    }

    return 0;
}