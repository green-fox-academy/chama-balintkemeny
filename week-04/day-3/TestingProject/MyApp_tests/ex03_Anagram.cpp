#include <gtest/gtest.h>
#include <algorithm>

bool ifAnagram(std::string input1, std::string input2) {
    std::sort(input1.begin(), input1.end());
    std::sort(input2.begin(), input2.end());
    return input1 == input2;
}

TEST(ex03, subtest1) {
    EXPECT_EQ(ifAnagram("abba", "baba"), true);
}