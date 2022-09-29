#include <stdio.h>

float yearfrac(int year, int day)
{
    if (year%4 == 0)
    {
        float dayy = day;
        float part = dayy/366;
        return part;
    }
    else
    {
        float dayy = day;
        float part = dayy/365;
        return part;
    }
}



int main()
{
    int year, day;
    scanf("%i %i", &year, &day);
    printf("%.5f\n", yearfrac(year, day));
}