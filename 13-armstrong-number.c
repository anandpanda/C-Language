#include <stdio.h>
int main()
{
    printf("Enter a number : ");
    int num, dig;
    // int count = 0;
    scanf("%d", &num);

    // counting digits method 1 :

    // for (int i = num, j = 1; i > 0, j > 0; i /= 10, j++)
    // {
    //     if (i > 0 && i <= 1)
    //     {
    //         dig = j;
    //         break;
    //     }
    // }

    // counting digits method 2 :

    int count = 0, n = num;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    dig = count;

    int tempnum = num, rem, sum = 0;
    while (tempnum > 0) 
    {
        int result = 1;
        rem = tempnum % 10;
        for (int i = 1; i <= dig; i++)
        {
            result *= rem;
        }
        sum += result;
        tempnum /= 10;
    }

    if (sum == num)
    {
        printf("%d is Armstrong Number.", num);
    }
    else
    {
        printf("%d is not Armstrong Number.", num);
    }
    return 0;
}