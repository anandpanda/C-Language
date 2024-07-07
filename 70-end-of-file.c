#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;

    fptr = fopen("test.txt", "r");
    // char ch;
    char ch = fgetc(fptr);

    while (ch != EOF) // after reading last character fgetc returns EOF   
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    printf("\n");

    fclose(fptr);

    return 0;
}