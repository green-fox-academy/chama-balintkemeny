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

point_t create_point(float ix, float iy)
{
    point_t out_point;
    out_point.x = ix;
    out_point.y = iy;
    return out_point;
}

float distance(point_t a, point_t b)
{
    float dx = b.x - a.x;
    float dy = b.y - a.y;
    float distsq = dx * dx + dy * dy;
    double dist = sqrt((double)distsq);
    return (float)dist;
}

int main()
{
    point_t p1 = create_point(1, 1);
    point_t p2 = create_point(1, 5.5f);
    float dist = distance(p1, p2);
    printf("%.2f", dist);
    return 0;
}