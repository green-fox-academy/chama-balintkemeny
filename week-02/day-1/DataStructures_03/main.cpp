#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> listA;
    listA.push_back("Apple");
    listA.push_back("Avocado");
    listA.push_back("Blueberries");
    listA.push_back("Durian");
    listA.push_back("Lychee");

    std::vector<std::string> listB;
    listB = listA;

    if (std::count(listA.begin(), listA.end(), "Durian") == 1) {
        std::cout << "Contains Durian" << std::endl;
    } else {
        std::cout << "Doesn't contain Durian" << std::endl;
    }

    listB.erase(listB.begin() + 3);

    for (int i = 0; i < listB.size(); ++i) {
        std::cout << listB[i] << std::endl;
    }

    listA.insert(listA.begin() + 4, "Kiwifruit");

    if (listA.size() > listB.size()) {
        std::cout << "List A contains more elements, than list B" << std::endl;
    } else {
        std::cout << "List A does not contain more elements, than list B" << std::endl;
    }

    //Check the index number of Avocado in List A
    std::vector<std::string>::iterator it = std::find(listA.begin(), listA.end(), "Avocado");
    std::cout << std::distance(listA.begin(), it) << std::endl;

    //Check if Durian is present in List B
    it = std::find(listB.begin(), listB.end(), "Durian");
    if (it != listB.end()) {
        std::cout << "Durian is found in List B" << std::endl;
    } else {
        std::cout << "Durian is not found in List B" << std::endl;
    }

    //Add Passion Fruit and Pomelo to list B
    listB.insert(listB.end(), "Passion Fruit");
    listB.emplace_back("Pomelo");

    std::cout << listA[2] << std::endl;



    return 0;
}