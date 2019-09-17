#include <iostream>

int main() {
    //Pointers contain memory addresses, saved as variables
    //* and & operators are used, and they mean different things in different contexts
    //Pointers are very different from reference variables
    int num = 15;
    //Print memory location of num variable, where the variable BEGINS
    std::cout << &num << std::endl;
    //& Memory address operator

    //How to create a pointer (that points to an int - type: int*):
    int *ptrToNum = &num;
    std::cout << ptrToNum << std::endl;
    //A pointer also has a memory address

    //How to use dereference - how to change a value stored AT a memory location
    *ptrToNum = 23;
    std::cout << num << std::endl;
    std::cout << ptrToNum << std::endl;



    return 0;
}