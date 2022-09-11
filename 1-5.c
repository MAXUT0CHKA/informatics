#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%i", &n);
    printf("%i", n);
    int max = n;
    int len = 1;
    while (n-1)
    {
        if (n%2 == 1)
            n = 3*n + 1;
        else
            n = n/2;
        printf(" %i", n);
        len += 1;
        if (n > max)
            max = n;
    }
    printf("\n");
    printf("Length = %i, Max = %i\n", len, max);
}