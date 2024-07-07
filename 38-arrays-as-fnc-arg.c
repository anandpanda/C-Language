#include <stdio.h>

void printnum(int arr[], int n); // or int *arr

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printnum(arr, 6);

    return 0;
}
void printnum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
}
