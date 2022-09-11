#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%i", &n);
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        int a;
        scanf("%i", &a);
        if (a % 2 == 0 && a < min)
            min = a;
        else if (a % 2 == 1 && a > max)
            max = a;
    }

    if (min == INT_MAX && max != INT_MIN)
        printf("None %i\n", max);

    else if (max == INT_MIN && min != INT_MAX)
        printf("%i None\n", min);

    else if (min == INT_MAX && max == INT_MIN)
        printf("None None\n");

    else
        printf("%i %i\n", min, max);
}
