#include <gtest/gtest.h>
#include <iostream>
#include <vector>

int exSum (std::vector<int> inputVec) {
    int out = 0;
    for (int i : inputVec) {
        out += i;
    }
    return out;
}

std::vector<int> testVector = {2, 4, 5, 7, 9};

TEST(ex02, subtest1) {
    EXPECT_EQ(exSum(testVector), 21);
}

