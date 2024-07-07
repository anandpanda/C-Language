#include <stdio.h>
int main()
{
    int num, n;
    printf("Enter a num : ");
    scanf("%d", &num);

    for (int j = 1; j <= 10; j++)
    {
        printf("%d X %d = %d \n", num, j, j * num);
    }
    return 0;
}