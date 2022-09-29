#include <stdio.h>

float pi(int n)
{
    float pii;
    for (int i = 1; i <= n; ++i)
    {
        if (i % 2 == 1)
            pii += 1.0 / (2 * i - 1);
        else
            pii -= 1.0 / (2 * i - 1);
    }
    pii *= 4;
    return pii;
}

int main()
{
    int n;
    scanf("%i", &n);
    printf("%.10f\n", pi(n));
}