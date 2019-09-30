#include <iostream>
#include "Garden.h"

int main() {
    Flower testYellow("yellow");
    Flower testBlue("blue");
    Tree testPurple("purple");
    Tree testOrange("orange");

    Garden testGarden;
    testGarden.addPlant(&testYellow);
    testGarden.addPlant(&testBlue);
    testGarden.addPlant(&testPurple);
    testGarden.addPlant(&testOrange);

    testGarden.info();

    testGarden.waterPlants(40.0);
    testGarden.waterPlants(70.0);

    return 0;
}