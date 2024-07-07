#include <stdio.h>

int main()
{
    int arr[7] = {2, 5, 8, 9, 7, 6, 4};
    int num = arr[0];
    for (int i = 1; i < 7; i++)
    {
        if (arr[i] > num)
        {
            num = arr[i];
        }
    }

    printf("Largest number is : %d", num);
    
    return 0;
}