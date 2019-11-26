#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Create a point struct which has two float variables: x and y
Create a function that constructs a point
It should take it's x and y coordinate as parameter
Create a function that takes 2 points and returns the distance between them
Example:
int main()
{
	point_t p1 = create_point(1, 1);
	point_t p2 = create_point(1, 5.5);
	float dist = distance(p1, p2);
	printf("%f", dist);
	return 0;
}
*/

typedef struct {
    float x;
    float y;
} point_t;

point_t create_point(float x, float y);
float distance(point_t p1, point_t p2);

int main()
{
    point_t p1 = create_point(2.0f, 5.5f);
    point_t p2 = create_point(3.2f, 4.0f);
    float dist_points = distance(p1, p2);
    printf("Distance between point 1 and 2: %.2f\n", dist_points);
    return 0;
}

point_t create_point(float x, float y)
{
    point_t output_point;
    output_point.x = x;
    output_point.y = y;
    return output_point;
}

float distance(point_t p1, point_t p2)
{
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    float dist_sq = dx * dx + dy * dy;
    double dist = sqrt((double)dist_sq);
    return (float)dist;
}