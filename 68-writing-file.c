#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;

    fptr = fopen("test.txt", "w"); // write deletes all previous data

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');
    fclose(fptr);

    fptr = fopen("test.txt", "a"); // appends at last
    
    fprintf(fptr, "%c", ' ');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'P');
    fprintf(fptr, "%c", 'P');
    fprintf(fptr, "%c", 'L');
    fprintf(fptr, "%c", 'E');

    fclose(fptr);
    return 0;
}