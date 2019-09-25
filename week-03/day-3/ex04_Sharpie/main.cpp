#include <iostream>
#include "Sharpie.h"

int main() {
    Sharpie objSharpie("red", 3.5);
    std::cout << "Remaining ink: " << objSharpie.getInkAmount() << std::endl;
    objSharpie.use();
    std::cout << "Remaining ink after use: " << objSharpie.getInkAmount() << std::endl;
    return 0;
}