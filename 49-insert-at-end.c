#include <stdio.h>

int main()
{
    int arr[] = {2, 5, 8, 9, 7, 6, 4};
    int _arr[8];
    for (int i = 0; i < 8; i++)
    {
        if (i == 7)
        {
            printf("Enter num to be inserted : ");
            scanf("%d", &_arr[7]);
        }
        else
        {
            _arr[i] = arr[i];
        }
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d \t", _arr[i]);
    }

    return 0;
}