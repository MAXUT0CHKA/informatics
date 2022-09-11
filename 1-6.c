#include <stdio.h>

int main()
{
    int a, b;
    scanf("%i %i", &a, &b);
    int n = a;
    int len = 1;
    for (int i = a; i <= b; ++i)
    {
        int m = i;
        int l = 1;
        while (m - 1)
        {
            if (m % 2 == 1)
                m = 3 * m + 1;
            else
                m = m / 2;
            l += 1;
        }
        if (l > len)
        {
            len = l;
            n = i;
        }
    }
    printf("%i %i\n", n, len);
}