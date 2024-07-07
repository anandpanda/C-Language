#include <stdio.h>

void printhw(int count);
int sumn(int n);
int sum = 0;

int main()
{
    printhw(1);
    printf("\n%d", sumn(6));
    printf("\n%d", sum2(6));
    return 0;
}

// recursive function
void printhw(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello World \n");
    printhw(count - 1);
}
int sumn(int n)
{
    if (n == 0)
    {
        return sum;
    }
    sum = sum + n;
    sumn(n - 1);
}
int sum2(int n)
{
    if (n == 1)
    {
        return 1;
    }
    // int sumnm1 = sum2(n - 1);
    int sumN = sum2(n - 1) + n;
    return sumN;
}