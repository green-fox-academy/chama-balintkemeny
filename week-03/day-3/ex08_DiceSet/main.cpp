#include <iostream>
#include "dice_set.h"

int main(int argc, char* args[])
{
    // You have a `DiceSet` class which has a list for 6 dices
    // You can roll all of them with roll()
    // Check the current rolled numbers with getCurrent()
    // You can reroll with roll()
    // Your task is to roll the dices until all of the dices are 6
    DiceSet diceSet;
    diceSet.roll();

    std::vector<int> currentRes = diceSet.getCurrent();
    std::cout << "Results of the first roll:" << std::endl;
    for (int i : currentRes) {
        std::cout << i << std::endl;
    }

    int numberOfSixes;
    int numberOfRolls = 0;
    while (numberOfSixes != 6) {
        numberOfSixes = 0;
        diceSet.roll();
        currentRes = diceSet.getCurrent();
        for (int j : currentRes) {
            if (j == 6) {
                numberOfSixes++;
            }
        }
        numberOfRolls++;
    }

    std::cout << "The number of rolls required to roll all sixes:" << std::endl;
    std::cout << numberOfRolls << std::endl;
    std::cout << "Check the results of the roll:" << std::endl;
    for (int i : currentRes) {
        std::cout << i << std::endl;
    }

    return 0;
}