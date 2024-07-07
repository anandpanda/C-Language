#include <stdio.h>

void swap(int a, int b);
void _swap(int *p, int *q);

int main()
{

    int x = 6;
    int y = 8;
    swap(x, y);
    printf("x = %d & y = %d \n\n", x, y);
    _swap(&x, &y);
    printf("x = %d & y = %d \n", x, y);

    return 0;
}

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d \n", a, b);
}

void _swap(int *p, int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
    printf("p = %d & q = %d \n", *p, *q);
}
