#include <stdio.h>

int old_enough(int age)
{
    if (age >= 18)
        return 1;
    else
        return 0;
}

int main()
{
    int age;
    printf("Please type in your age:\n");
    scanf("%d", &age);

    if (old_enough(age))
        printf("You are old enough to buy alcohol in Hungary.\n");
    else
        printf("You need to wait until you're 18 to buy alcohol in Hungary.\n");

    return 0;
}