#include <stdio.h>

int sod(int num);

int main()
{
    int num;
    printf("Enter the num : ");
    scanf("%d", &num);
    printf("The sum of the digits of %d is = %d", num, sod(num));

    return 0;
}

int sod(int num)
{
    int dig, sum = 0;
    for (int i = num; i > 0; i /= 10)
    {
        dig = i % 10;
        sum = sum + dig;
    }
    return sum;
}
