#include <string.h>
#include <stdio.h>
#include <time.h>

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

typedef enum transmission {
    MANUAL,
    AUTOMATIC,
    CVT,
    SEMI_AUTOMATIC,
    DUAL_CLUTCH
} transmission_t;

typedef struct {
    char* manufacturer;
    float price;
    int year;
    transmission_t transmission;
} car_t;

int get_older_cars_than(car_t* car_array, int array_length, int age)
{
    time_t seconds;
    seconds = time(NULL);
    float year_abs = seconds / 31557600.f + 1970.0f;
    int age_limit = (int)year_abs - age;

    int counter = 0;
    for (int i = 0; i < array_length; ++i) {
        if ((car_array + i)->year < age_limit)
            counter++;
    }
    return counter;
}

int get_transmission_count(car_t* car_array, int array_length, transmission_t trsmn)
{
    int counter = 0;
    for (int i = 0; i < array_length; ++i) {
        if ((car_array + i)->transmission == trsmn)
            counter++;
    }
    return counter;
}

int main()
{

    car_t car_array[] = { { "Toyota", 1500.50, 1994, MANUAL },
                          { "Toyota", 1500.50, 1998, AUTOMATIC },
                          { "Toyota", 1500.50, 1994, MANUAL },
                          { "Toyota", 500.50, 1984, DUAL_CLUTCH },
                          { "Toyota", 4500.50, 1994, CVT } };

    car_array[0].year = 1980;
    car_array[0].transmission = MANUAL;
    car_array[1].year = 2000;
    car_array[1].transmission = AUTOMATIC;
    car_array[2].year = 2010;
    car_array[2].transmission = MANUAL;

    printf("Number of cars that are more than 20 years old: %d\n",
            get_older_cars_than(car_array, sizeof(car_array)/ sizeof(car_t), 20));

    printf("Number of cars with manual transmission: %d\n",
            get_transmission_count(car_array, 4, MANUAL));

    return 0;
}