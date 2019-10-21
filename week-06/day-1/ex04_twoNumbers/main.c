#include <stdio.h>

int main() {
    int sum = 13 + 22;
    int difference = 22 - 13;
    int product = 22 * 13;
    float quotient = (float)22 / 13;
    int remainder = 22 % 13;

    printf("sum: %d\n", sum);
    printf("difference: %d\n", difference);
    printf("product: %d\n", product);
    printf("quotient: %.2f\n", quotient);
    printf("remainder: %d\n", remainder);

    return 0;
}