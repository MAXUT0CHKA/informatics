#include <stdio.h>
#include <math.h>

long long fact(long long n)
{
    long long result = 1;
    for (long long i = 1; i <= n; ++i)
        result *= i;
    return result;
}

float volume(int n)
{
    if (n % 2 == 0)
    {
        float pi = 3.1415926535;
        float ratio = (pow(2, n) * fact(n/2)) / pow(pi, n/2);
        return ratio;
    }
    else
    {
        float pi = 3.1415926535;
        float ratio = (pow(2, n-1) * fact(n)) / (fact((n-1)/2) * pow(4 * pi, ((n-1)/2)));
        return ratio;
    }
}

int main()
{
    int n;
    scanf("%i", &n);
    printf("%.6f\n", volume(n));
}