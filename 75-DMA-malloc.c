#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//  DMA -  Dynamic Memory Allocation

// malloc() - memory allocation
// takes num. of bytes to be allocated and returns a pointer type of void
// e.g : ptr = (int*) malloc (5 * sizeof(int))   ---- (int*) -> typecast void to int

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    // memory is allocated during runtime, not during compiletime
    // if system is unable to provide required memory due to capacity, malloc returns NULL

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", ptr[i]);
    }

    return 0;
}