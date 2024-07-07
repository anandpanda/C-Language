#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//  DMA -  Dynamic Memory Allocation

// free() - used to free memory that is alloated using malloc or calloc
// e.g : free(ptr)

int main()
{

    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);
    
    printf("\n");
    ptr = (int *)calloc(2, sizeof(int));
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}