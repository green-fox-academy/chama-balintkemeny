#include <iostream>
#include <algorithm>

bool anagram (std::string inputA, std::string inputB);

int main() {
    std::string a = "fox";
    std::string b = "bird";

    std::cout << anagram(a, b) << std::endl;

    return 0;
}

bool anagram (std::string inputA, std::string inputB) {
    bool ifAnagram = false;
    if (inputA.length() == inputB.length()) {
        std::sort(inputA.begin(), inputA.end());
        std::sort(inputB.begin(), inputB.end());
        ifAnagram = inputA == inputB;
    }
    return ifAnagram;
}