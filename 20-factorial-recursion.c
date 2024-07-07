#include <stdio.h>

int fact(int n);

int main()
{
    int num;
    printf("Enter a num : ");
    scanf("%d", &num);
    printf("%d! is = %d", num, fact(num));
    return 0;
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int factn = fact(n - 1) * n;
    return factn;
}