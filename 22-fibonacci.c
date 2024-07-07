#include <stdio.h>

int fibn(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int fibN = fibn(n - 1) + fibn(n - 2);
    return fibN;
}
void fib()
{
    int j;
    printf("Enter the index : ");
    scanf("%d", &j);
    for (int i = 0; i <= j; i++)
        printf("%d ", fibn(i));
}
int main()
{
    fib();
    return 0;
}