#include <stdio.h>

long long fact(long long n)
{
    long long result = 1;
    for (long long i = 1; i <= n; ++i)
        result *= i;
    return result;
}

long long placement(long long n, long long k)
{
    long long result = fact(n) / fact(n-k);
    return result;
}

int main() {
    long long n, k;
    scanf("%lli %lli", &n, &k);
    printf("%lli\n", placement(n, k));
}