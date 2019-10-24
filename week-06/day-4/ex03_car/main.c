#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct car {
    enum car_type type;
    double km;
    double gas;
};

void print_car_stats(struct car input_car)
{
    switch (input_car.type) {
        case VOLVO :
            printf("Car type: Volvo\n");
            break;
        case TOYOTA :
            printf("Car type: Toyota\n");
            break;
        case LAND_ROVER :
            printf("Car type: Land Rover\n");
            break;
        case TESLA :
            printf("Car type: Tesla\n");
            break;
    }

    printf("Total travelled distance: %.2f\n", input_car.km);

    switch (input_car.type) {
        case VOLVO :
        case TOYOTA :
        case LAND_ROVER :
            printf("Gas level: %.2f\n", input_car.gas);
            break;
        case TESLA :
            break;
    }
}

int main()
{
    struct car test_car = {TESLA, 5000.0, 0};
    struct car test_car2 = {VOLVO, 45000.0, 60};
    print_car_stats(test_car);
    print_car_stats(test_car2);
    return 0;
}