#include <stdio.h>

int main()
{
    // Case 1 int or float

    int age = 22;
    int *ptr = &age; // datatype is int
    printf("ptr = %u \n", ptr);
    ptr++; // ptr = ptr + 1 => +1 datatype i.e int (4 bytes)
    printf("ptr = %u \n", ptr);

    // Case 2 char

    char star = '*';
    char *_ptr = &star; // datatype is char
    printf("_ptr = %u \n", _ptr);
    _ptr++; // _ptr = _ptr + 1 => +1 datatype i.e char (1 bytes)
    printf("_ptr = %u \n", _ptr);

    return 0;
}