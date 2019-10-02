#include <gtest/gtest.h>
#include <vector>

int fibonacci(int index) {
    std::vector<int> fibSeq = {0, 1};
    for (int i = 2; i < index; ++i) {
        fibSeq.push_back(fibSeq[i-2] + fibSeq[i-1]);
    }
    return fibSeq[index - 1];
}

TEST(ex05, fibTest) {
    std::vector<int> testVec = {0, 1, 1, 2, 3, 5, 8, 13};
    for (int i = 0; i < testVec.size(); ++i) {
        ASSERT_EQ(testVec[i], fibonacci(i + 1));
    }
}

