#include <iostream>

int main() {

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *ptrToA = &a;
    double *ptrToB = &b;
    std::string *ptrToName = &name;

    std::cout << ptrToA << " : " << *ptrToA << std::endl;
    std::cout << ptrToB << " : " << *ptrToB << std::endl;
    std::cout << ptrToName << " : " << *ptrToName << std::endl;

    return 0;
}