#include <stdio.h>

int main()
{
    // int *ptr = &arr[0];
    // or
    // int *ptr = arr;

    int aadhar[3];

    // input

    int *ptr = &aadhar[0];
    for (int i = 0; i < 3; i++)
    {
        printf("%d index : ", i);
        scanf("%d", &aadhar[i]);
        printf("ptr : %u \n", (ptr));
        printf("ptr +i : %u \n", (ptr + i));
        // scanf("%d",(ptr + i));
    }

    // output

    for (int i = 0; i < 3; i++)
    {
        printf("%d index : %d\n", i, aadhar[i]);
        // printf("%d index : %d\n", i, (ptr + i) );
    }
    return 0;
}