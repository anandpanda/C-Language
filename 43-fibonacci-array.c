#include <stdio.h>

int main()
{
    printf("Enter size : ");
    int n;
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == 1)
        {
            printf("%d \t", fib[i]);
        }
        else
        {
            fib[i] = fib[i - 1] + fib[i - 2];
            printf("%d \t", fib[i]);
        }
    }

    return 0;
}