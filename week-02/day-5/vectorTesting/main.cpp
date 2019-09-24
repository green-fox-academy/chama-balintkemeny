#include <iostream>
#include <vector>
//Testing for each loops and vectors


int main() {
    std::vector<int> vecA = {2, 4, -3};
    int offset = 4;
    std::vector<int> vecTest;
    vecTest.reserve(vecA.size());

    for (int i : vecA) {
        vecTest.push_back(i + offset);
    }

    for (int j : vecTest) {
        std::cout << j << std::endl;
    }


    return 0;
}

/*
 * void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    vector<int> locApples;
    vector<int> locOranges;
    locApples.reserve(apples.size());
    locOranges.reserve(oranges.size());

    for (int i : apples) {
        locApples.push_back(i + a);
    }

    for (int j : oranges) {
        locOranges.push_back(j + b);
    }

    int appleCount = 0;
    for (int k : locApples) {
        if (k >= s && k <= t) {
            appleCount++;
        }
    }

    int orangeCount = 0;
    for (int l : locOranges) {
        if (l >= s && l <= t) {
            orangeCount++;
        }
    }

    cout << appleCount << endl;
    cout << orangeCount << endl;

}
 */