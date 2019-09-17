#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> shoppingList = {"eggs", "milk", "fish", "apples", "bread", "chicken"};

    int indexMilk = 0;
    int indexBananas = 0;

    for (std::string listItem : shoppingList) {
        if (listItem == "milk") {
            std::cout << "There is milk on the list" << std::endl;
            indexMilk++;
        } else if (listItem == "bananas") {
            std::cout << "There are bananas on the list" << std::endl;
            indexBananas++;
        }
    }

    if (indexMilk == 0) {
        std::cout << "There is no milk on the list" << std::endl;
    }

    if (indexBananas == 0) {
        std::cout << "There aren't any bananas on the list" << std::endl;
    }

    return 0;
}