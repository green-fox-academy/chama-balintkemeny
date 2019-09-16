#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main() {

    //Create map called bookList
    std::map<std::string, std::string> bookList;
    bookList.emplace(std::pair<std::string, std::string>("978-1-60309-452-8", "A Letter to Jo"));
    bookList.emplace(std::pair<std::string, std::string>("978-1-60309-459-7", "Lupus"));
    bookList.emplace(std::pair<std::string, std::string>("978-1-60309-444-3", "Red Panda and Moon Bear"));
    bookList.emplace(std::pair<std::string, std::string>("978-1-60309-461-0", "The Lab"));

    //Print all elements of bookList
    for(std::pair<std::string, std::string> bookPair : bookList) {
        std::cout << bookPair.second << " (ISBN: " << bookPair.first << ")" << std::endl;
    }

    //Erase Red Panda and Moon Bear
    std::map<std::string, std::string>::iterator it = bookList.find("978-1-60309-444-3");
    if (it != bookList.end()) {
        bookList.erase(it);
    }

    //Erase by value
    for (std::map<std::string, std::string>::iterator it2 = bookList.begin(); it2 != bookList.end(); ++it2) {
        if (it2->second == "The Lab") {
            bookList.erase(it2);
        }
    }

    bookList.emplace(std::pair<std::string, std::string>("978-1-60309-450-4", "They Called Us Enemy"));
    bookList.emplace(std::pair<std::string, std::string>("978-1-60309-453-5", "Why Did We Trust Him?"));

    //Check if there's a certain key
    std::map<std::string, std::string>::iterator it3 = bookList.find("478-0-61159-424-8");
    if (it3 != bookList.end()) {
        std::cout << "ISBN number found" << std::endl;
    } else {
        std::cout << "ISBN not found" << std::endl;
    }

    //Print associated value
    for (std::pair<std::string, std::string> bookPair : bookList) {
        if (bookPair.first == "978-1-60309-453-5") {
            std::cout << bookPair.second << std::endl;
        }
    }

    return 0;
}