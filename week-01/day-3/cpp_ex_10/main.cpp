#include <iostream>

int main() {

    //Is the number odd?
    int inputNumber;
    std::cout << "Please enter an integer:" << std::endl;
    std::cin >> inputNumber;

    if (inputNumber % 2 == 0) {
        std::cout << "Even" << std::endl;
    } else {
        std::cout << "Odd" << std::endl;
    }

    return 0;
}