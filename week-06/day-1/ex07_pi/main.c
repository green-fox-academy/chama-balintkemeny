#include <stdio.h>
#include "circle.h"

int main()
{
    float test_radius = 3.3f;
    float test_circle_area = area_circle(test_radius);
    float test_circle_circumference = circumference_circle(test_radius);

    printf("The area of a circle with a radius of %.2f is: %.2f\n", test_radius, test_circle_area);
    printf("The circumference of a circle with a radius of %.2f is: %.2f\n", test_radius, test_circle_circumference);
    return 0;
}