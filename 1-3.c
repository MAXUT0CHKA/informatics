#include <stdio.h>

int main()
{
    int a, m;
    scanf("%i", &a);

    m = 1;
    while (m != a + 1)
    {
        printf("%3i -> %3i -> %3i\n", m, m*m, m*m*m);
        m += 1;
    }
}
