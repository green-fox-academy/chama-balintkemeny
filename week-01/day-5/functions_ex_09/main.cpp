#include <iostream>
using namespace std;

//ANAGRAM EXERCISE - YET TO BE RESOLVED!!!

int main() {
    std::cout << "" << std::endl;
    return 0;
}

bool anagram (string inputA, string inputB) {
    bool ifAnagram = false;
    int lengthA = inputA.length();
    int lengthB = inputB.length();

    if (lengthA == lengthB) {
        /*for (int i = 0; i < lengthA; ++i) {
            int j;
            for (j = 0; j < lengthA; ++j) {
                if (inputA[i] == inputB[j]) {

                }
            }
        } */
        int i = 0;
        while (i < lengthA) {
            int j = 0;
            while (j < lengthA) {
                if (inputA[i] == inputB[j]) {

                }
                j++;
            }
            i++;
        }
    } else {
        ifAnagram = false;
    }
    return  ifAnagram;
}