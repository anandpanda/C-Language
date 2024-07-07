#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Mississippi";

    int ascii[122] = {0};

    // counting letters

    for (int i = 0; str[i] != '\0'; i++)
    {
        ascii[(int)str[i]]++;
    }

    // printing letters

    int temp = 0;
    int index;

    for (int i = 0; i < 122; i++)
    {
        if (ascii[i] != 0)
        {
            printf("%c   %d\n", i, ascii[i]);

            if (ascii[i] > temp)
            {
                temp = ascii[i];
                index = i;
            }
        }
    }

    // printing most frequent letter

    for (int i = 0; i < 122; i++)
    {
        if (ascii[i] == temp)
        {
            printf("%c, ", i);
        }
    }
    printf("occurs most i.e %d times.\n", temp);

    return 0;
}