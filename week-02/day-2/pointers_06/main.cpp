#include <iostream>

void pointerSwap (int *ptrToA, int *ptrToB);

int main() {

    int a = 10;
    int b = 316;

    int *ptrToA = &a;
    int *ptrToB = &b;

    pointerSwap(ptrToA, ptrToB);

    std::cout << a << ", " << b << std::endl;
    return 0;
}

void pointerSwap (int* ptrToA, int* ptrToB) {

    int temp = 0;
    int *ptrTemp = &temp;
    *ptrTemp = *ptrToA;
    *ptrToA = *ptrToB;
    *ptrToB = *ptrTemp;

}