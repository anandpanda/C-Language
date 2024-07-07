#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//  DMA -  Dynamic Memory Allocation

// calloc() - continuous memory allocation
// takes num. of spaces and bytes per space to be allocated and returns a pointer type of void
// e.g : ptr = (int*) calloc (5, sizeof(int))   ---- (int*) -> typecast void to int

int main()
{

    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    // initializes each location with 0
   
    // ptr[0] = 1;
    // ptr[1] = 3;
    // ptr[2] = 5;
    // ptr[3] = 7;
    // ptr[4] = 9;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}