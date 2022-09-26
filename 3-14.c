#include <stdio.h>

void sort(int n, int a[])
{
    for (int j = 0; j < n; ++j)
    {
        for (int i = 0; i < n - 1 - j; i += 1)
        {
            if (a[i] < a[i + 1])
            {
                int c = a[i];
                a[i] = a[i + 1];
                a[i + 1] = c;
            }
        }
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
    sort(size, array);
    for (int i = 0; i < size; ++i)
        printf("%i ", array[i]);
    printf("\n");
}