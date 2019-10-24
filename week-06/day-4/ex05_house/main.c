#include <stdio.h>

/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/

typedef struct {
    char* address;
    float price;
    int rooms;
    float area;
} house_t, *house_p;

int house_eval(house_p input_house)
{
    float price_rel = input_house->price / input_house->area;
    if (price_rel >= 400)
        return 0;
    else
        return 1;
}

int worthy_house_counter(house_t houses[], int len)
{
    int counter = 0;
    for (int i = 0; i < len; ++i) {
        if (house_eval(&houses[i]))
            counter++;
    }
    return counter;
}

int main()
{
    house_t test_house[3];
    test_house[0].area = 50.1f;
    test_house[1].area = 62.5f;
    test_house[2].area = 75.0f;
    test_house[0].price = 17000;
    test_house[1].price = 25000;
    test_house[2].price = 28000;

    /*
    int* test_p;
    int x = 5;
    test_p = &x;
    *test_p = 10;
    */

    printf("House 1: %d\n", house_eval(&test_house[0]));
    printf("House 2: %d\n", house_eval(&test_house[1]));
    printf("House 3: %d\n", house_eval(&test_house[2]));
    printf("Number of houses that worth it: %d\n", worthy_house_counter(test_house, 3));
    return 0;
}