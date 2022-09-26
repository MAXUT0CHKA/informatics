#include <stdio.h>

void reverse(int n, int a[])
{
    for (int i = 0; i < n / 2; ++i)
    {
        int c = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = c;
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
    reverse(size, array);
    for (int i = 0; i < size; ++i)
        printf("%i ", array[i]);
    printf("\n");
}