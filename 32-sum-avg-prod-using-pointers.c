#include <stdio.h>

void sap(int a, int b, int *sum, int *avg, int *prod);

int main()
{
    int a = 3, b = 5;
    int sum, avg, prod;
    sap(a, b, &sum, &avg, &prod);
    printf("sum = %d \navg = %d \nprod = %d \n", sum, avg, prod);
    return 0;
}

void sap(int a, int b, int *sum, int *avg, int *prod)
{
    *sum = a + b;
    *avg = (a + b) / 2;
    *prod = a * b;
}
