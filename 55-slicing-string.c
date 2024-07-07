#include <stdio.h>
#include <string.h>

void slice(char string[]);

int main()
{
    char string[50];
    gets(string);
    slice(string);
    return 0;
}

void slice(char string[])
{
    if (strlen(string) >= 7)
    {
        for (int i = 3; i <= 6; i++)
        {
            printf("%c", string[i]);
        }
    }
    else
    {
        printf("Noob");
    }
}