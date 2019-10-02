#include "extension.h"
#include <gtest/gtest.h>
#include <algorithm>
#include <sstream>

int add(int a, int b)
{
    return a + b;
}

int maxOfThree(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else return c;
}

int median(std::vector<int> pool) {
    //std::sort(pool.begin(), pool.end());
    //if ()
    return pool.at(pool.size()/2);
}

bool isVowel(char c) {
    static const std::vector<char> vowels = {'a', 'u', 'o', 'e', 'i', 'A', 'U', 'O', 'E', 'I'};
    return std::find(vowels.begin(), vowels.end(), c) != vowels.end();
}

std::vector<std::string> split(const std::string& str, char delim)
{
    std::stringstream ss(str);
    std::string token;
    std::vector<std::string> v;
    while (std::getline(ss, token, delim)) {
        v.push_back(token);
    }

    return v;
}

std::string join(const std::string& separator, const std::vector<std::string>& array)
{
    std::stringstream ss;
    for(int i = 0; i < array.size(); ++i)
    {
        ss << array[i];
        if(i != array.size() - 1)
        {
            ss << separator;
        }
    }

    return ss.str();
}

std::string translate(const std::string& hungarian)
{
    std::string teve = hungarian;
    int length = teve.size();
    for (int i = 0; i < length; i++) {
        const char c = teve.at(i);
        if (isVowel(c)) {
            teve = join(std::string(1, c) + "v" + std::string(1, c), split(teve, c));
            i+=2;
            length+=2;
        }
    }
    return teve;
}

TEST(add, _2and3is5) {
    ASSERT_EQ(9, add(6, 3));
}

TEST(add, _1and4is5) {
    ASSERT_EQ(5, add(1, 4));
}

TEST(max_of_three, first) {
    ASSERT_EQ(9, maxOfThree(5, 4, 9));
}

TEST(max_of_three, third) {
    ASSERT_EQ(5, maxOfThree(3, 4, 5));
}

TEST(median, four) {
    ASSERT_EQ(5, median({7, 6, 4, 1}));
}

TEST(median, five) {
    ASSERT_EQ(3, median({1, 2, 3, 4, 5}));
}

TEST(is_vowel, i) {
    ASSERT_TRUE(isVowel('I'));
}

TEST(is_vowel, z) {
    ASSERT_FALSE(isVowel('z'));
}

TEST(translate, bemutatkozik) {
    ASSERT_EQ("bevemuvutavatkovozivik", translate("bemutatkozik"));
}

TEST(translate, lagopus) {
    ASSERT_EQ("lavagovopuvus", translate("lagopus"));
}