#include <stdio.h>

void countodd(int arr[], int n);

int main()
{
    int arr[] = {1, 9, 3, 4, 5};
    countodd(arr, 5);
    return 0;
}

void countodd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        if (val % 2 != 0)
        {
            count++;
        }
    }
    printf("No. of odd num : %d \n", count);
}
