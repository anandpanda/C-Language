#include <stdio.h>

int main()
{
    int arr[13] = {2, 5, 8, 8, 9, 2, 7, 5, 8, 6, 4, 9, 4};

    int temp;

    for (int i = 0; i < 13; i++)
    {
        for (int k = i - 1; k >= 0; k--) // check if num is present previously
        {
            if (arr[k] == arr[i])
            {
                goto end;
            }
        }
        int count = 0;
        temp = arr[i];
        for (int j = i; j < 13; j++) // counting num ahead
        {
            if (arr[j] == temp)
            {
                count++;
            }
        }
        printf("%d \t %d \n", arr[i], count);
    end:
        continue;
    }

    return 0;
}