/* Write a car register!
 * You should store the following data in a structure, called "car":
 *  - the manufacturer's name (which is shorter than 256 characters)
 *  - the price of the car (in euros, stored as a floating point number)
 *  - the year of manufacture
 *  - the type of the transmission (as a custom type, see below)
 *
 * You should store the transmission type in an enumeration ("transmission"),
 * the valid types are:
 *  - manual
 *  - automatic
 *  - CVT
 *  - semi-automatic
 *  - dual-clutch
 *
 * The "car"-s are stored in an array.
 *
 * Write the following functions:
 *  - get_older_cars_than(struct car* array, int array_length, int age)
 *      - it returns the count of the older cars than "age"
 *  - get_transmission_count(struct car* array, int array_length, enum transmission trnsm)
 *      - it returns the count of cars which has "trnsm" transmission
 */

#include <string.h>
#include <stdio.h>
#define CURRENT_YEAR 2019

typedef enum {
    MANUAL,
    AUTOMATIC,
    CVT,
    SEMI_AUTOMATIC,
    DUAL_CLUTCH
} transmission_t;

typedef struct {
    char manufacturer[256];
    float price;
    int year;
    transmission_t transmission;
} car_t;

int get_older_cars_than(car_t* array, int length, int age);
int get_transmission_count(car_t* array, int length, transmission_t transmission);

int main()
{
    car_t car_array[2] = {{"Toyota", 1000, 1990, MANUAL},
                          {"Nissan", 5000, 2018, AUTOMATIC}};

    printf("%d\n", get_older_cars_than(car_array, sizeof(car_array) / sizeof(car_t), 10));
    printf("%d\n", get_transmission_count(car_array, sizeof(car_array) / sizeof(car_t), AUTOMATIC));
    return 0;
}

int get_older_cars_than(car_t* array, int length, int age)
{
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if ((array + i)->year < (CURRENT_YEAR - age)) {
            counter++;
        }
    }
    return counter;
}

int get_transmission_count(car_t* array, int length, transmission_t transmission)
{
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if ((array + i)->transmission == transmission) {
            counter++;
        }
    }
    return counter;
}