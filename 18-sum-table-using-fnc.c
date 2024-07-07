#include <stdio.h>
int sum(int x, int y);
void table(int n);

int main()
{
    int a, b, n;

    printf("Enter 1st No. : ");
    scanf("%d", &a);

    printf("Enter 2nd No. : ");
    scanf("%d", &b);

    int s = sum(a, b);

    printf("The sum is : %d \n", s);

    printf("Enter No. for Table : ");
    scanf("%d", &n);
    table(n);

    return 0;
}

int sum(int x, int y)
{
    return x + y;
}

void table(int n)
{
    for (int j = 1; j <= 10; j++)
    {
        printf("%d X %d = %d \n", n, j, j * n);
    }
}