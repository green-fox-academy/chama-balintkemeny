#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> productData2;
    productData2.emplace(std::pair<std::string, int>("Eggs", 200));
    productData2.emplace(std::pair<std::string, int>("Milk", 200));
    productData2.emplace(std::pair<std::string, int>("Fish", 400));
    productData2.emplace(std::pair<std::string, int>("Apples", 150));
    productData2.emplace(std::pair<std::string, int>("Bread", 50));
    productData2.emplace(std::pair<std::string, int>("Chicken", 550));

    std::cout << "The items that cost less, than 201 are:" << std::endl;
    for (std::pair<std::string, int> item : productData2) {
        if (item.second < 201) {
            std::cout << item.first << std::endl;
        }
    }

    std::cout << "The items that cost more, than 150 are:" << std::endl;
    for (std::pair<std::string, int> item : productData2) {
        if (item.second > 150) {
            std::cout << item.first << ": " << item.second << std::endl;
        }
    }
    
    return 0;
}