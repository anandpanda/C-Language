#include <stdio.h>
int main()
{
    int d;
    printf("Enter Dimensions : ");
    scanf("%d", &d);
    for (int n = 1; n <= d; n++)
    {
        for (int j = 1; j <= d; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}