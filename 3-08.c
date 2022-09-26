#include <stdio.h>

int count_even(int n, int a[])
{
    int c = 0;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 == 0)
            c += 1;
    }
    return c;
}

int main()
{
    int size;
    scanf("%i", &size);
    int array[size];
    for (int i = 0; i < size; ++i)
    {
        int n;
        scanf("%i", &n);
        array[i] = n;
    }
    printf("%i\n", count_even(size, array));
}
