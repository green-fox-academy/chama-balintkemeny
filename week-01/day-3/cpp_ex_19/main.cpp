#include <iostream>

int main() {

    //Finally, the famous FizzBuzz challenge
    int cycleNumber = 1;

    while (cycleNumber <= 100) {
        if (cycleNumber % 3 == 0) {
            if (cycleNumber % 5 == 0) {
                std::cout << "FizzBuzz" << std::endl;
            } else {
                std::cout << "Fizz" << std::endl;
            }
        } else if (cycleNumber % 5 == 0) {
            std::cout << "Buzz" << std::endl;
        } else {
            std::cout << cycleNumber << std::endl;
        }
        cycleNumber++;
    }

    return 0;
}