#include <stdio.h>

int number_of_digits(int input)
{
    int num_digits = 0;
    while (input != 0) {
        ++num_digits;
        input /= 10;
    }
    printf("The number of digits is: %d\n", num_digits);
    return num_digits;
}

int sum_of_digits(int input)
{
    int num_digits = number_of_digits(input);
    int sum_digits = 0;

    for (int i = 0; i < num_digits; ++i) {
        int quotient = 1;
        for (int j = 0; j < num_digits - i - 1; ++j)
            quotient *= 10;
        sum_digits += input / quotient;
        input -= (input / quotient) * quotient;
    }
    printf("The sum of digits is: %d\n", sum_digits);
    return sum_digits;
}

int is_sum_of_digits_equal(int a, int b)
{
    int sum_digits_a = sum_of_digits(a);
    int sum_digits_b = sum_of_digits(b);

    if (sum_digits_a == sum_digits_b)
        return 1;
    else
        return 0;
}

int main()
{
    int a = 123;
    int b = 321;

    if (is_sum_of_digits_equal(a, b))
        printf("The sum of digits are equal.\n");
    else
        printf("The sum of digits are not equal.\n");
    return 0;
}