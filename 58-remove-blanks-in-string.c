#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello World I am Anand";
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            for (int j = i; str[j] != 0; j++)
            {
                str[j] = str[j + 1];
            }
        }
    }
    puts(str);
    return 0;
}