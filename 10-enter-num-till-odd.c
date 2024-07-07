#include <stdio.h>
int main()
{
    int num;
    do
    {
        printf("Enter num : ");
        scanf("%d", &num);
    } while (num % 2 == 0);
    printf("Thanks");

    // do
    //     {
    //         printf("Enter num : ");
    //         scanf("%d", &num);
    // if (num %2 !=0)
    // {
    //     break;
    // }
    //     } while (1);
    //     printf("Thanks");

    return 0;
}