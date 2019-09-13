//Functions 10. - PALINDROME BUILDER
#include <iostream>
std::string palindromeBuilder (std::string stringIn);


int main() {
    std::string input;
    std::cout << "Please type in a word:" << std::endl;
    std::cin >> input;

    std::cout << palindromeBuilder(input) << std::endl;
    return 0;
}

std::string palindromeBuilder (std::string stringIn) {
    int lengthOfInput = stringIn.length();
    std::string stringOut;

    for (int i = 0; i < lengthOfInput; ++i) {
        stringOut += stringIn[lengthOfInput - (i + 1)];
    }

    stringOut = stringIn + stringOut;
    return stringOut;
}