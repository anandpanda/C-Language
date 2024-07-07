#include <stdio.h>

int main()
{
    int terms;
    printf("Enter no. of terms : ");
    scanf("%d", &terms);

    int t1 = 0, t2 = 1;

    for (int i = 0; i < terms - 2; i++)
    {
        if (i == 0 || i == 1)
        {
            printf("%d ", i);
        }

        int t3 = t1 + t2;
        printf("%d ", t3);
        t1 = t2;
        t2 = t3;
    }

    return 0;
}