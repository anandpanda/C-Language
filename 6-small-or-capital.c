#include <stdio.h>
int main()

{
    char i;
    printf("Enter a letter ('A-Z or a-z') : ");
    scanf("%c", &i);
    if (i >= 'A' && i <= 'Z')
    {
        printf("Capital");
    }
    else if (i >= 'a' && i <= 'z')
    {
        printf("Small");
    }
    else
    {
        printf("Its not a letter!");
    }
    return 0;
}