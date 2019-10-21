#include <stdio.h>

int is_prime(int input)
{
    int prime_indicator = 0;
    for (int i = 2; i < input; ++i) {
        if (input % i) {
            ++prime_indicator;
        }
    }
    if (input == prime_indicator + 2)
        return 1;
    else
        return 0;
}

int main()
{
    int input_number;
    printf("Please enter a number:\n");
    scanf("%d", &input_number);

    if (is_prime(input_number))
        printf("Your number is a prime!\n");
    else
        printf("Your number is not a prime!\n");
    return 0;
}