#include <iostream>

int main() {

    //Parametric average
    int numberOfCycles;
    int currentCycle = 0;
    int currentNumber;
    int sum = 0;
    double average;

    std::cout << "How many numbers would you like to input?" << std::endl;
    std::cin >> numberOfCycles;

    while (currentCycle < numberOfCycles) {
        std::cout << "Please enter a number:" << std::endl;
        std::cin >> currentNumber;
        sum += currentNumber;
        currentCycle++;
    }

    average = (float)sum / numberOfCycles;
    std::cout << "Sum: " << sum << ", ";
    std::cout << "Average: " << average << std::endl;

    return 0;
}