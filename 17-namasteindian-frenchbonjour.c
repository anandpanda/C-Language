#include <stdio.h>

void namaste();
void bonjour();

int main()
{
    char nat;
    printf("What are you ? \n");
    printf("Enter 'I' if Indian or 'F' if French. \n");
    scanf("%c", &nat);

    if (nat == 'I')
    {
        namaste();
    }
    else if (nat == 'F')
    {
        bonjour();
    }
    return 0;
}

void namaste()
{
    printf("Namaste! \n");
}

void bonjour()
{
    printf("Bonjour! \n");
}