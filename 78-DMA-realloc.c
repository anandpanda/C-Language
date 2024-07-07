#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//  DMA -  Dynamic Memory Allocation

// realloc() - reallocation of memory
// used to reallocate (inc or dec) memory using the same pointer and size
// e.g : ptr = realloc(ptr, newsize)

int main()
{

    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    ptr = realloc(ptr, 7 * sizeof(int));

    ptr[5] = 11;
    ptr[6] = 13;

    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}