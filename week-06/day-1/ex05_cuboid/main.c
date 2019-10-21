#include <stdio.h>

int main() {
    int side_a;
    int side_b;
    int side_c;

    printf("Please input the size of one side:\n");
    scanf("%d", &side_a);

    printf("Please input the size of the second side:\n");
    scanf("%d", &side_b);

    printf("Please input the size of the third side:\n");
    scanf("%d", &side_c);

    int surface = 2 * side_a * side_b + 2 * side_a * side_c + 2 * side_b * side_c;
    int volume = side_a * side_b * side_c;

    printf("Surface area: %d\n", surface);
    printf("Volume: %d\n", volume);

    return 0;
}