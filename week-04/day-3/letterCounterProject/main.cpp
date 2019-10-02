#include <iostream>
#include <string>
#include <vector>
#include <map>

std::map<char, int> letterCounter(std::string input) {
    std::map<char, int> output;
    for (unsigned int i = 0; i < input.size(); ++i) {
        int counter = 0;
        for (unsigned int j = 0; j < input.size(); ++j) {
            if (input[i] == input [j]) ++counter;
        }
        output.emplace(std::pair<char, int> (input[i], counter));
    }
    return output;
}

int main() {
    std::map<char, int> testMap = letterCounter("hippopotamus");

    for (std::pair<char, int> i : testMap) {
        std::cout << i.first << ", " << i.second << std::endl;
    }
    return 0;
}