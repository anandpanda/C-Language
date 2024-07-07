#include <stdio.h>

int main()
{
    // for loop

    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    // while loop

    int i = 1;
    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }

    // do while loop
    
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}