#include <stdio.h>

void printhello(); // declaration/prototype

int main()
{
    printhello(); // call
    return 0;
}

void printhello() // definition
{
    printf("Hello! \n");
    printf("My name is Anand! \n");
}