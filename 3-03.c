#include <stdio.h>

void print_even(int l, int r)
{
    if (l % 2 == 0)
    {
        for (int i = l; i <= r; i += 2)
        {
            printf("%i ", i);
        }
        printf("\n");
    }
    else
    {
        for (int i = l + 1; i <= r; i += 2)
        {
            printf("%i ", i);
        }
        printf("\n");
    }
}

int main()
{
    int a, b;
    scanf("%i %i", &a, &b);
    print_even(a, b);
}