#include <stdio.h>

void reverse_subarray(int n, int left, int right, int a[])
{
    for (int i = left; i < (left + right) / 2; ++i)
    {
        int c = a[i];
        a[i] = a[left+right-i-1];
        a[left+right-i-1] = c;
    }
}

int main()
{
    int size, left, right;
    scanf("%i %i %i", &size, &left, &right);
    int array[size];
    for (int i = 0; i < size; ++i)
    {
        int n;
        scanf("%i", &n);
        array[i] = n;
    }
    reverse_subarray(size, left, right, array);
    for (int i = 0; i < size; ++i)
        printf("%i ", array[i]);
    printf("\n");
}