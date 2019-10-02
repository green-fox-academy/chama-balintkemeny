#include <gtest/gtest.h>
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

TEST(ex04, subtest1) {
    std::map<char, int> testMap = letterCounter("apple");
    char testChars[] = {'a', 'e', 'l', 'p'};
    int testNumbers[] = {1, 1, 1, 2};

    int i = 0;
    for(std::map<char, int>::iterator testIterator = testMap.begin();
        testIterator != testMap.end(); testIterator++) {
        ASSERT_EQ(testChars[i], testIterator->first);
        ASSERT_EQ(testNumbers[i], testIterator->second);
        ++i;
    }
}

