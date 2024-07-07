#include <stdio.h>
int main()
{
    printf("Enter a number : ");
    int n, sum;
    scanf("%d", &n);
    if (n >= 0)
    {
        for (int i = 0; i <= n; i++)
        {
            sum += i;
        }
        printf("Sum of numbers upto %d is : %d\n", n, sum);
        printf("Revrese order upto %d is : \n", n);
        for (int i = n; i >= 0; i--)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        printf("Enter a positive number!");
    }

    return 0;
}