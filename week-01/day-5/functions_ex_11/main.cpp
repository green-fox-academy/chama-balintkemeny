#include <iostream>


//Majdnem jo, finomitani kell!
void palindromeSearch (std::string input);

int main() {
    std::string test = "ala posola albla";
    palindromeSearch(test);
    return 0;
}

void palindromeSearch (std::string input) {
    std::string strArr[input.length()];
    for (int i = 0; i < input.length(); ++i) {
        std::string tempStr;
        for (int j = 0; j <= i; ++j) {
            if (input[i-j] == input[i+j]) {
                tempStr += input[i-j];
            }
        }
        if (tempStr.length() % 2 ==0) {
            for (int k = 0; k < (tempStr.length()/2); ++k) {
                strArr[i] += tempStr[tempStr.length() - (k + 1)];
            }
        } else {
            for (int k = 0; k <= (tempStr.length()/2); ++k) {
                strArr[i] += tempStr[tempStr.length() - (k + 1)];
            }
        }

        strArr[i] += tempStr;

        if (strArr[i].length() > 2) {
            std::cout << strArr[i] << std::endl;
        }
    }
}