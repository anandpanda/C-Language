#include <stdio.h>
int main()
{
    printf("Enter a number : ");
    int n;
    scanf("%d", &n);

    printf("Revrese order upto %d is : \n", n);

    if (n >= 0)
    {
        int sum = 0;
        for (int i = n; i >= 0; i--)
        {
            printf("%d\n", i);
            sum += i;
        }
        printf("Sum of numbers upto %d is : %d\n", n, sum);
    }
    else
    {
        printf("Enter a positive number!");
    }
    return 0;
}