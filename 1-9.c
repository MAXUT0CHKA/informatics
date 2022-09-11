#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%i", &n);
    for (int c = 1; c < n; ++c)
    {
        for (int b = 1; b < n; ++b)
        {
            for (int a = 1; a < b && b < c && a < n; ++a)
            {
                int count = 0;
                for (int d = 2; d < a; ++d)
                {
                    if (a%d == 0 && b%d == 0 && c%d == 0)
                        count += 1;
                }
                if (count == 0 && pow(a, 2) + pow(b, 2) == pow(c, 2))
                    printf("%i %i %i\n", a, b, c);
            }
        }
    }
}