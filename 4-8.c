#include <stdio.h>

double f(double x)
{
    return x * x - 7;
}

double bins(double l, double h)
{
    if (h - l < 1e-10)
    {
        return (l + h)/2;
    }
    else
    {
        double m = (l + h) / 2;
        if (f(m) < 0)
        {
            l = m;
            return bins(l, h);
        }
        else
        {
            h = m;
            return bins(l, h);
        }
    }
}

int main()
{
    double l, h;
    scanf("%lf %lf", &l, &h);
    printf("%lf\n", bins(l, h));
}