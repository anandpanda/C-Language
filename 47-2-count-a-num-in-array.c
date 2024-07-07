#include <stdio.h>
#include <string.h>

int main()
{
    int arr[] = {2, 5, 8, 8, 9, 2, 7, 5, 8, 6, 4, 9, 4, 5};
    int count[10] = {0};

    for (int i = 0; i < 14; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (count[i] != 0)
        {
            printf("%d   %d\n", i, count[i]);
        }
    }

    return 0;
}