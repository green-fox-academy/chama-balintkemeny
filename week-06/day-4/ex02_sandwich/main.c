#include <stdio.h>

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

typedef struct {
    char* name;
    float price;
    float weight;
} sandwich_t;

float order_cost(sandwich_t sandwich, int quantity)
{
    return sandwich.price * (float)quantity;
}

int main()
{
    sandwich_t test_sandwich;
    test_sandwich.name = "Chicken teriyaki";
    test_sandwich.price = 4.5f;
    test_sandwich.weight = 0.2f;

    printf("The cost of your order: %.2f euro(s)\n", order_cost(test_sandwich, 3));
    return 0;
}