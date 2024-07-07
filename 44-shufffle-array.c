#include <stdio.h>

int main()
{
    int nums[] = {2, 5, 1, 3, 4, 7};
    int n = 3;
    int arr[6];

    for (int i = 0; i < n; i++)
    {
        arr[2 * i] = nums[i];
        arr[(2 * i) + 1] = nums[i + 3];
    }

    for (int i = 0; i < 2 * n; i++)
    {
        printf("%d \t", arr[i]);
    }

    return 0;
}