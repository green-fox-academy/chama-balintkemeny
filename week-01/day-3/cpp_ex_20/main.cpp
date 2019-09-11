#include <iostream>

int main() {

    //Draw triangle
    int currentCycle = 1;
    int triangleSize;
    std::cout << "How many rows do you want in your triangle: " << std::endl;
    std::cin >> triangleSize;

    while (currentCycle <= triangleSize) {
        std::cout << std::string(currentCycle, '*') << std::endl;
        currentCycle++;
    }

    return 0;
}