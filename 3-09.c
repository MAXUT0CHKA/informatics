#include <stdio.h>

void dec(int n, int a[])
{
    for (int i = 0; i < n; ++i)
    {
        a[i] -= 1;
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
    dec(size, array);
    for (int i = 0; i < size; ++i)
        printf("%i ", array[i]);
    printf("\n");
}
