#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "r");

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("%c", ch);
    fscanf(fptr, "%c", &ch);
    printf("%c", ch);
    fscanf(fptr, "%c", &ch);
    printf("%c", ch);
    fscanf(fptr, "%c", &ch);
    printf("%c", ch);
    fscanf(fptr, "%c", &ch);
    printf("%c", ch);

    fclose(fptr);
    return 0;
}