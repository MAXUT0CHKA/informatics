#include <stdio.h>

int deg(int a, int b)
{
    int p = 1;
    for (int i = 0; i < b; ++i)
    {
        p *= a;
    }
    return p;
}

int sum_of_digits(int n)
{
    int sum = 0;
    int i = 1;

    while (n != 0)
    {
        int s, d;
        d = deg(10, i);
        s = n % d;
        s /= deg(10, i-1);
        sum += s;
        n -= s * deg(10, i - 1);
        i += 1;
    }
    return sum;
}

int sum_of_digits_rec(int n)
{
    if (n == 0)
        return 0;

    return n % 10 + sum_of_digits_rec(n / 10);
}

int main()
{
    int a;
    scanf("%i", &a);
    printf("%i\n", sum_of_digits(a));
    printf("%i\n", sum_of_digits_rec(a));
}
