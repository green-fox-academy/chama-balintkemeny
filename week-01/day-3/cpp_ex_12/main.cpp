#include <iostream>

int main() {

    //Print bigger number
    double a;
    double b;

    std::cout << "Please enter a number:" << std::endl;
    std::cin >> a;

    std::cout << "Please enter another number:" << std::endl;
    std::cin >> b;

    if (a > b) {
        std::cout << "The bigger number is: " << a << std::endl;
    } else if (a < b) {
        std::cout << "The bigger number is: " << b << std::endl;
    } else {
        std::cout << "Bro, your numbers are equal!" << std::endl;
    }

    return 0;
}