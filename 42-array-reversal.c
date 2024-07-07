#include <stdio.h>

void reverse(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    reverse(arr, 7);

    return 0;
}

void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int fv = arr[i];
        int sv = arr[n - 1 - i];
        arr[i] = sv;
        arr[n - 1 - i] = fv;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}
