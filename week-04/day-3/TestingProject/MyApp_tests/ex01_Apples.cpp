#include <gtest/gtest.h>
#include <iostream>

std::string getApple() {
    return "apple";
}

TEST(getAppleTest, subtest1) {
    ASSERT_STREQ("apple", getApple().c_str());
}