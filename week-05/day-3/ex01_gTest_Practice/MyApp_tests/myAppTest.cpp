//
// Created by balintkemeny on 2019. 10. 09..
//

#include <gtest/gtest.h>
#include "myClass.h"
#include "TestCar.h"

TEST(test_test, subTest1){
    EXPECT_EQ(getApple(), "apple");
}

class TestCarTest : public ::testing::Test {
protected:
    //executed before every test
    void SetUp() override {
        _car.refill();
    }
    void TearDown() override {}

    TestCar _car;
};

TEST_F(TestCarTest, DriveOnce) {
    _car.drive();
    EXPECT_EQ(_car.getGas(), 95);
}

TEST_F(TestCarTest, DriveFiveTimes) {
    for (int i = 0; i < 5; ++i) {
        _car.drive();
    }
    EXPECT_EQ(_car.getGas(), 75);
}

TEST(matrix_test, matrix_subtest_1) {
    std::vector<std::vector<int>> in = {{1,2,3},
                                        {4,5,6},
                                        {7,8,9}};

    std::vector<std::vector<int>> out = {{9,6,3},
                                         {8,5,2},
                                         {7,4,1}};

    EXPECT_EQ(invertMatrixAlongShittyDiagonal(in), out);
}

TEST(matrix_test, matrix_subtest_2) {
    std::vector<std::vector<int>> in = {{1,2,3,2},
                                        {4,5,6,4},
                                        {7,8,9,6}};

    EXPECT_THROW(invertMatrixAlongShittyDiagonal(in), std::string);
}






