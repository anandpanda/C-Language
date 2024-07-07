#include <stdio.h>

int main()
{
    int fno, sno, *num1 = &fno, *num2 = &sno;
    printf("Enter the 1st number : ");
    scanf("%d", &fno);
    printf("Enter the 2st number : ");
    scanf("%d", &sno);
    if (*num1 > *num2)
    {
        printf("%d is Max", *num1);
    }
    else if (*num2 > *num1)
    {
        printf("%d is Max", *num2);
    }
    else
    {
        printf("Numbers are equal!");
    }

    return 0;
}