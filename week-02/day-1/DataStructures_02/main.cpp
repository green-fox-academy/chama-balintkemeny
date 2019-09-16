#include <iostream>
#include <map>

int main() {
    std::map<int, char> testMap;
    std::cout << testMap.empty() << "\n" << std::endl;

    testMap[97] = 'a';
    testMap[98] = 'b';
    testMap[99] = 'c';
    testMap[65] = 'A';
    testMap[66] = 'B';
    testMap[67] = 'C';

    for(std::map<int, char>::iterator it = testMap.begin(); it != testMap.end(); ++it) {
        std::cout << it->first << std::endl;
    }

    for(std::map<int, char>::iterator it2 = testMap.begin(); it2 != testMap.end(); ++it2) {
        std::cout << it2->second << std::endl;
    }

    testMap.insert(std::pair<int, char>(68, 'D'));
    std::cout << testMap.size() << std::endl;
    std::cout << testMap[99] << std::endl;

    testMap.erase(97);
    std::cout << testMap.count(100) << std::endl;

    testMap.clear();
    std::cout << testMap.empty() << std::endl;

    return 0;
}