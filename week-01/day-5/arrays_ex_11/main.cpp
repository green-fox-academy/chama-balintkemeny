#include <iostream>

int main() {

    std::string abc[3] = {"first", "second", "third"};
    std::string tempString;

    tempString = abc[0];
    abc[0] = abc[2];
    abc[2] = tempString;

    int i = 0;
    while (i < 3) {
        std::cout << abc[i] << std::endl;
        i++;
    }

    return 0;
}