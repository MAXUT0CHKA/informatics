

#include <stdio.h>

int trib(int n)
{
    if (n == 0)
        return 0;

    else if (n == 1)
        return 0;

    else if (n == 2)
        return 1;

    return trib(n - 3) + trib(n - 2) + trib(n - 1);
}

int main()
{
    int a;
    scanf("%i", &a);
    printf("%i\n", trib(a));
}
