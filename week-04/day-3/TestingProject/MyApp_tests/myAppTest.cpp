#include <gtest/gtest.h>
#include "myClass.h"
#include <iostream>

myClass varTestClass;


TEST(myClassTest, subtest1) {
    ASSERT_EQ(varTestClass.testSum(2,3), 5);
    std::cout << "Success???" << std::endl;
}