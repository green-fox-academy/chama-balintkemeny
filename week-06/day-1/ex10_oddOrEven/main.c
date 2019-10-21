#include <stdio.h>

int is_even(int input_number)
{
    if (input_number % 2)
        return 0;
    else
        return 1;
}

int main()
{
    int a;
    printf("Please type in a number:\n");
    scanf("%d", &a);

    if (is_even(a))
        printf("Your number is even!\n");
    else
        printf("Your number is odd!\n");
    return 0;
}