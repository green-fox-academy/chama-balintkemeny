#include <stdio.h>

int main() {
    int target_number = 24;
    int guessed_number;

    printf("Guess a number:\n");
    scanf("%d", &guessed_number);

    while (guessed_number != target_number) {
        if (guessed_number < target_number) {
            printf("The stored number is higher. Guess again:\n");
        } else {
            printf("The stored number is lower. Guess again:\n");
        }
        scanf("%d", &guessed_number);
    }

    printf("You found the number: %d\n", target_number);
    return 0;
}