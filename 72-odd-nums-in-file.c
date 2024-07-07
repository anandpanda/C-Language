#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;
    fptr = fopen("n Odd Nums.txt", "w");

    int n;
    printf("Enter number of terms(n) : ");
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n; i++)
    {
        if (i % 2 != 0)
        {
            fprintf(fptr, "%d\n", i);
        }
    }

    fclose(fptr);
    return 0;
}