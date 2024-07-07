#include <stdio.h>

void revarr(int arr[], int n);
void printnum(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4};
    printnum(arr, 4);
    printf("\n");
    revarr(arr, 4);
    printnum(arr, 4);

    return 0;
}

void revarr(int arr[], int n)
{
    int _arr[n];

    for (int i = 0; i < n; i++)
    {
        _arr[i] = arr[(n - 1) - i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = _arr[i];
    }
}

void printnum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}
