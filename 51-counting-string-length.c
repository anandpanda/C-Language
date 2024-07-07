#include <stdio.h>

void countlength(char name[]);

int main()
{
    char name[30];
    printf("Enter First name : ");
    fgets(name, 30, stdin);
    countlength(name);
    return 0;
}

void countlength(char name[])
{
    int count = 0;
    int i;
    for (i = 0; name[i] != '\0'; i++)
        ;
    printf("Length is : %d", i - 1);
}
