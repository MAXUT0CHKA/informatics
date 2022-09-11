#include <stdio.h>
#include <limits.h>

int main()
{
    int n, a;
    scanf("%i", &n);
    scanf("%i", &a);
    int count = 0;

    for (int i = 1; i < n; ++i)
    {
        int b;
        scanf("%i", &b);

        if (a == b)
            count += 0;

        if (a < b)
        {
            count += 1;
            a = b;
        }

        if (a > b)
        {
            count += 2;
            a = b;
        }
    }

    if (count == 0)
        printf("Equal\n");
    else if (count == n - 1)
        printf("Increasing\n");
    else if (count == 2 * n - 2)
        printf("Decreasing\n");
    else
        printf("None\n");
}