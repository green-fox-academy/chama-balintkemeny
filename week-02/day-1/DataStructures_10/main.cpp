#include <iostream>
#include <map>

int main() {
    std::map<std::string, float> prices;
    prices.emplace(std::pair<std::string, float>("Milk", 1.07));
    prices.emplace(std::pair<std::string, float>("Rice", 1.59));
    prices.emplace(std::pair<std::string, float>("Eggs", 3.14));
    prices.emplace(std::pair<std::string, float>("Cheese", 12.60));
    prices.emplace(std::pair<std::string, float>("Chicken", 9.40));
    prices.emplace(std::pair<std::string, float>("Apples", 2.31));
    prices.emplace(std::pair<std::string, float>("Tomato", 2.58));
    prices.emplace(std::pair<std::string, float>("Potato", 1.75));
    prices.emplace(std::pair<std::string, float>("Onion", 1.10));

    std::map<std::string, int> bob;
    bob.emplace(std::pair<std::string, int>("Milk", 3));
    bob.emplace(std::pair<std::string, int>("Rice", 2));
    bob.emplace(std::pair<std::string, int>("Eggs", 2));
    bob.emplace(std::pair<std::string, int>("Cheese", 1));
    bob.emplace(std::pair<std::string, int>("Chicken", 4));
    bob.emplace(std::pair<std::string, int>("Apples", 1));
    bob.emplace(std::pair<std::string, int>("Tomato", 2));
    bob.emplace(std::pair<std::string, int>("Potato", 1));

    std::map<std::string, int> alice;
    alice.emplace(std::pair<std::string, int>("Rice", 1));
    alice.emplace(std::pair<std::string, int>("Eggs", 5));
    alice.emplace(std::pair<std::string, int>("Chicken", 2));
    alice.emplace(std::pair<std::string, int>("Apples", 1));
    alice.emplace(std::pair<std::string, int>("Tomato", 10));

    float sumBob = 0;
    for (std::pair<std::string, int> item : bob) {
        sumBob += item.second * prices[item.first];
    }
    std::cout << "Bob pays: " << sumBob << std::endl;

    float sumAlice = 0;
    for (std::pair<std::string, int> item: alice) {
        sumAlice += item.second * prices[item.first];
    }
    std::cout << "Alice pays: " << sumAlice << std::endl;

    if (alice["Rice"] > bob["Rice"]) {
        std::cout << "Alice buys more rice" << std::endl;
    } else if (bob["Rice"] > alice["Rice"]) {
        std::cout << "Bob buys more rice" << std::endl;
    } else {
        std::cout << "They buy equal amounts of rice due to communism" << std::endl;
    }

    if (alice["Potato"] > bob["Potato"]) {
        std::cout << "Alice buys more potato" << std::endl;
    } else if (bob["Potato"] > alice["Potato"]) {
        std::cout << "Bob buys more potato" << std::endl;
    } else {
        std::cout << "They buy equal amounts of potato" << std::endl;
    }

    alice.erase("Potato");
    if (alice.size() > bob.size()) {
        std::cout << "Alice buys more kinds of products" << std::endl;
    } else if (alice.size() < bob.size()) {
        std::cout << "Bob buys more kinds of products" << std::endl;
    } else {
        std::cout << "They buy the same number of different products" << std::endl;
    }

    int indexAlice = 0;
    int indexBob = 0;

    for (std::pair<std::string, int> item : alice) {
        indexAlice += item.second;
    }
    for (std::pair<std::string, int> item : bob) {
        indexBob += item.second;
    }

    if (indexAlice > indexBob) {
        std::cout << "Alice buys a bigger amount of products" << std::endl;
    } else if (indexAlice < indexBob) {
        std::cout << "Bob buys a bigger amount of products" << std::endl;
    } else {
        std::cout << "They buy the same amount products" << std::endl;
    }

    return 0;
}