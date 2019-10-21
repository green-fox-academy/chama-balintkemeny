#include <stdio.h>

int is_equal(int a, int b)
{
    if (a == b)
        return 1;
    else
        return 0;
}

int main()
{
    int a;
    int b;

    printf("Please enter a number:\n");
    scanf("%d", &a);

    printf("Please enter another number:\n");
    scanf("%d", &b);

    if (is_equal(a, b))
        printf("Your numbers are equal.");
    else
        printf("Your numbers are not equal.");
    return 0;
}