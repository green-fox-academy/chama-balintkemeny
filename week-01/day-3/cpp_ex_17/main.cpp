#include <iostream>

int main() {

    int inputNumber;
    int cycleNumber = 1;

    std::cout << "Enter a number for the multiplication table:" << std::endl;
    std::cin >> inputNumber;

    while (cycleNumber <= 10) {
        std::cout << cycleNumber << " * " << inputNumber << " = ";
        std::cout << cycleNumber * inputNumber << std::endl;
        cycleNumber++;
    }

    return 0;
}