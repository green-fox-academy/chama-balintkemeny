#include <iostream>

int main() {

    int a = 20;
    int b = 17;

    int *ptrToA = &a;
    int *ptrToB = &b;

    int c;
    int *ptrToC = &c;

    *ptrToC = *ptrToA + *ptrToB;

    std::cout << c << std::endl;
    return 0;
}