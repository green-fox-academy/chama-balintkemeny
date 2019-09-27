#include <iostream>

int recursivePower(int base, int exponent) {
    if (exponent < 1 || base < 1) return -1;
    else if (exponent == 1) return base;
    else return base * recursivePower(base, exponent - 1);
}

int main() {
    std::cout << "Please enter the base (integer): " << std::endl;
    int base;
    std::cin >> base;
    std::cout << "Please enter the exponent (integer): " << std::endl;
    int exponent;
    std::cin >> exponent;

    std::cout << "Base raised to the power of the exponent: " << recursivePower(base, exponent) << std::endl;

    return 0;
}