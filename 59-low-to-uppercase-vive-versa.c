#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World I am Anand";

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            char ch = str[i] + 32;
            str[i] = ch;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            char cha = str[i] - 32;
            str[i] = cha;
        }
    }

    puts(str);

    return 0;
}