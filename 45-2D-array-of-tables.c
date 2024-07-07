#include <stdio.h>

int main()
{
    int tables[2][10];
    for (int i = 0; i < 2; i++)
    {
        int n = i + 2;
        for (int j = 0; j < 10; j++)
        {
            tables[i][j] = n * (j + 1);
            printf("%d \t", tables[i][j]);

            if (i == 0 && j == 9)
            {
                printf("\n");
            }
        }
    }

    return 0;
}