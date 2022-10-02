#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
    double x1, y1, r1, x2, y2, r2;
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    scanf("%lf %lf %lf", &x2, &y2, &r2);
    double eps = 1e-5;

    if ((distance(x1, y1, x2, y2) - r1 - r2 > eps) || (r2 - distance(x1, y1, x2, y2) - r1 > eps) || (r1 - distance(x1, y1, x2, y2) - r2 > eps))
        printf("Do not intersect\n");

    else if (((-eps < (distance(x1, y1, x2, y2) - r1 - r2)) && ((distance(x1, y1, x2, y2) - r1 - r2) < eps)) || ((-eps < (r2 - distance(x1, y1, x2, y2) - r1)) &&  ((r2 - distance(x1, y1, x2, y2) - r1) < eps)) || ((-eps < (r1 - distance(x1, y1, x2, y2) - r2)) && ((r1 - distance(x1, y1, x2, y2) - r2) < eps)))
        printf("Touch\n");

    else
        printf("Intersect\n");
}