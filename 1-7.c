#include <stdio.h>
#include <math.h>

int main()
{
    int n, m;
    scanf("%i %i", &n, &m);
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            int b = pow(-1, i+j) * i * j;
            sum += b;
        }
    }
    printf("%i\n", sum);
}