#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;

    fptr = fopen("test.txt", "r");

    // fgetc -> reads character

    printf("%c", fgetc(fptr));
    printf("%c", getc(fptr));
    printf("%c", ffgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));

    // fputc -> writes characters

    fptr = fopen("test.txt", "w");
    fputc('A', fptr);
    fputc('P', fptr);
    fputc('P', fptr);
    fputc('L', fptr);
    fputc('E', fptr);

    fclose(fptr);
    return 0;
}