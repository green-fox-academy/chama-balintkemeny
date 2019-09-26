#include <iostream>
#include "SharpieSet.h"

int main() {
    Sharpie testSharpie1 ("red", 2.0f);
    Sharpie testSharpie2 ("green", 2.5f);
    Sharpie testSharpie3 ("blue", 3.0f);

    SharpieSet testSet;
    std::cout << "Number of usable sharpies in the set: " << testSet.countUsable() << std::endl;

    testSet.addSharpie(&testSharpie1);
    testSet.addSharpie(&testSharpie2);
    testSet.addSharpie(&testSharpie3);

    for (int i = 0; i < 100; ++i) {
        testSharpie1.use();
        std::cout << "Remaining ink in testSharpie 1. " << testSharpie1.getInkAmount() << std::endl;
    }

    std::cout << "Is testSharpie1 still usable: " << testSharpie1.isUsable() << std::endl;
    std::cout << "Number of usable sharpies in the set: " << testSet.countUsable() << std::endl;

    std::cout << "Remove unusable sharpie(s)" << std::endl;
    testSet.removeTrash();
    std::cout << "Number of usable sharpies in the set: " << testSet.countUsable() << std::endl;

    return 0;
}