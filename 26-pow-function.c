#include <stdio.h>

int power(int x, int y);

int main()
{
    printf("%d", power(5,3));
    return 0;
}

int power(int x, int y)
{
    int pow;
    pow = 1;
    for (int i = 1; i <= y; i++)
    {
        pow = pow * x;
    }
    return pow;
}
