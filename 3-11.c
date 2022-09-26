#include <stdio.h>

void factorials(int n, int a[])
{
    for (int i = 0; i < n; ++i)
    {
        int f = a[i];
        for (int j = a[i] - 1; j > 1; --j)
            f *= j;
        a[i] = f;
    }
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
    factorials(size, array);
    for (int i = 0; i < size; ++i)
        printf("%i ", array[i]);
    printf("\n");
}