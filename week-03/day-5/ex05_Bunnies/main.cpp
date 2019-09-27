#include <iostream>

int recursiveBunnies(int n) {
    if (n < 1) return 0;
    else return 2 + recursiveBunnies(n - 1);
}

int main() {
    std::cout << "Please enter a number of bunnies:" << std::endl;
    int numBun;
    std::cin >> numBun;
    std::cout << "The total number of big floppy ears: " << recursiveBunnies(numBun) << std::endl;
    return 0;
}