#include <iostream>
#include <map>
#include <string>
#include <vector>


int main() {
    std::map<std::string, std::string> telBook;
    telBook.emplace(std::pair<std::string, std::string>("William A. Lathan", "405-709-1865"));
    telBook.emplace(std::pair<std::string, std::string>("John K. Miller", "402-247-8568"));
    telBook.emplace(std::pair<std::string, std::string>("Hortensia E. Foster", "606-481-6467"));
    telBook.emplace(std::pair<std::string, std::string>("Amanda D. Newland", "319-243-5613"));
    telBook.emplace(std::pair<std::string, std::string>("Brooke P. Askew", "307-687-2982"));

    for (std::pair<std::string, std::string> nameTel : telBook) {
        if (nameTel.first == "John K. Miller") {
            std::cout << nameTel.second << std::endl;
        }
    }

    for (std::pair<std::string, std::string> nameTel : telBook) {
        if (nameTel.second == "307-687-2982") {
            std::cout << nameTel.first << std::endl;
        }
    }

    int index = 0;
    for (std::pair<std::string, std::string> nameTel : telBook) {
        if (nameTel.first == "Chris E. Myers") {
            std::cout << nameTel.second << std::endl;
            index++;
        }
    }
    if (index == 0) {
        std::cout << "Chris E. Myers not found in telephone book" << std::endl;
    } else {
        std::cout << "Chris E. Myers' telephone number was printed above" << std::endl;
    }
    return 0;
}