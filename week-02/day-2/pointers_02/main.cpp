#include <iostream>

int main() {

    int age = 31;
    int *ptrToAge = &age;

    std::cout << *ptrToAge << std::endl;

    return 0;
}