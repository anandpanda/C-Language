#include <stdio.h>

int main()
{
    printf("\nEnglish Letters: \n");

    char alph[26];
    char *ptr;
    ptr = alph;

    for (int i = 0; i < 26; i++)
    {
        *ptr = i + 'A';
        printf("%c ", *ptr);
        ptr++;
    }

    printf("\n\n");

    return 0;
}