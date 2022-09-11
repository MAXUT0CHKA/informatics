#include <stdio.h>
#include <limits.h>

int main()
{
    int n, m;
    m = 1;
    scanf("%i", &n);
    int max = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        scanf("%i", &a);
        if (a > max)
        {
            max = a;
            m = 1;
            b = max;
        }
        else if (a == max)
            m += 1;
    }
    printf("%i %i\n", max, m);
}
