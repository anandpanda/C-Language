#include <stdio.h>

int main()
{
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("ptr = %u \n_ptr = %u\nDifference = %u \n", ptr, _ptr, ptr - _ptr); // retuns diff in how many datatype
    // difference must be of same datatypes
    _ptr = &age;
    printf("Comparison = %u \n", ptr == _ptr); // true - returns 1

    return 0;
}