#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "hello world";
    for (int i = 0; string[i] != 0; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            printf("%c", string[i] - 32);
        }
        else
        {
            printf("%c", string[i]);
        }
    }

    return 0;
}