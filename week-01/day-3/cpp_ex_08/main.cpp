#include <iostream>

int main() {

    //Animals and Legs!
    int numberOfChickens;
    int numberOfPigs;
    int numberOfLegs;

    std::cout << "Please enter how many chickens does the farmer have:" << std::endl;
    std::cin >> numberOfChickens;
    std::cout << "Please enter how many pigs does the farmer have:" << std::endl;
    std::cin >> numberOfPigs;

    numberOfLegs = numberOfChickens * 2 + numberOfPigs * 4;
    std::cout << "The farmer has " << numberOfLegs << " animal legs on his farm." << std::endl;

    return 0;
}