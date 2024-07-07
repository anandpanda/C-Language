#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "r");

    int count = 0;
    char ch = fgetc(fptr);

    while (ch != EOF)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
            ch = fgetc(fptr);
        }
        else
        {
            ch = fgetc(fptr);
        }
    }

    printf("%d", count);

    fclose(fptr);

    fptr = fopen("test.txt", "a");

    fprintf(fptr, "%s", "\nVowels are : ");
    fprintf(fptr, "%d", count);

    fclose(fptr);

    return 0;
}