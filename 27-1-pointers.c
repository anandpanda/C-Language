#include <stdio.h>

int main()
{
    // * value at address operator, & address of operator
    int age = 22;    // name of memory loc is age
    int *ptr = &age; // mem loc ptr which stores address is made, address of age is assigned
    int _age = *ptr; // value from address at ptr is retrieved

    // address
    printf("%p \n", &age);
    printf("%u \n", &age);
    printf("%p \n", ptr);
    printf("%u \n", ptr);
    printf("%p \n", &ptr);
    printf("%u \n", &ptr);

    // value
    printf("%d \n", age);
    printf("%d \n", _age);
    printf("%d \n", *ptr);
    printf("%d \n", *(&age));

    return 0;
}