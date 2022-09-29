#include <stdio.h>

long long fact(long long n)
{
    long long result = 1;
    for (long long i = 1; i <= n; ++i)
        result *= i;
    return result;
}

int main() {
    long long k;
    scanf("%lli", &k);
    printf("%lli\n", fact(k));
}