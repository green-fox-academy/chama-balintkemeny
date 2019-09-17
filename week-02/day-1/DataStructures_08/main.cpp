#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> productData;
    productData.emplace(std::pair<std::string, int>("Eggs", 200));
    productData.emplace(std::pair<std::string, int>("Milk", 200));
    productData.emplace(std::pair<std::string, int>("Fish", 400));
    productData.emplace(std::pair<std::string, int>("Apples", 150));
    productData.emplace(std::pair<std::string, int>("Bread", 50));
    productData.emplace(std::pair<std::string, int>("Chicken", 550));

    for (std::map<std::string, int>::iterator it = productData.begin(); it != productData.end(); ++it) {
        std::cout << it->first << " : " << it->second << std::endl;
    }

    int sum = 0;
    int max = 0;
    for (std::pair<std::string, int> item : productData) {
        if (item.first == "Fish") {
            std::cout << "The price of fish is: " << item.second << std::endl;
        }
        sum += item.second;
        if (item.second > max) {
            max = item.second;
        }
    }
    float avg = (float)sum / productData.size();
    std::cout << "The average price is: " << avg << std::endl;

    for (std::pair<std::string, int> item : productData) {
        if (item.second == max) {
            std::cout << "The most expensive product is: " << item.first << std::endl;
        }
    }

    int indexBlw300 = 0;
    for (std::pair<std::string, int> item : productData) {
        if (item.second < 300) {
            indexBlw300++;
        }
    }
    std::cout << "The number of items that cost less, than 300 is: " << indexBlw300 << std::endl;

    int index125 = 0;
    for (std::pair<std::string, int> item : productData) {
        if (item.second == 125) {
            index125++;
        }
    }
    if (index125 > 0) {
        std::cout << "The number of items that cost 125: " << index125 << std::endl;
    } else {
        std::cout << "There are no items that cost 125!" << std::endl;
    }

    int min = max;
    for (std::pair<std::string, int> item : productData) {
        if (item.second < min) {
            min = item.second;
        }
    }

    for (std::pair<std::string, int> item : productData) {
        if (item.second == min) {
            std::cout << "The cheapest item is: " << item.first << std::endl;
        }
    }
    return 0;
}