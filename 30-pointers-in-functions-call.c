#include <stdio.h>

void square(int n);
void _square(int *n);

int main()
{
    int number = 4;
    square(number);
    printf("number : %d \n", number);
    _square(&number);
    printf("number : %d \n", number);

    return 0;
}

// call by value

void square(int n)
{
    n = n * n;  // changes of copy of number
    printf("square : %d \n", n);
}

// call by Reference

void _square(int *n)
{
    *n = (*n) * (*n);   // changes at address of number
    printf("square : %d \n", *n);
}
