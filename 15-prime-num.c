#include <stdio.h>
int main()
{
    int num, rem;
    printf("Enter a non-zero number : ");
    scanf("%d", &num);
    if (num != 0 && num != 1 && num != 2)
    {
        for (int i = 2; i < num; i++)
        {
            rem = num % i;
            if (rem == 0)
            {
                printf("%d is not prime", num);
                break;
            }
            else
            {
                continue;
            }
        }
        if (rem != 0)
        {
            printf("%d is Prime", num);
        }
    }
    else if (num == 1)
    {
        printf("%d is prime", num);
    }
    else if (num == 2)
    {
        printf("%d is Prime", num);
    }

    return 0;
}