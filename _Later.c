#include <stdio.h>

int main()
{
    int num[] = {0, 1, 2, 3, 4};
    int index[] = {0, 1, 2, 2, 1};
    int target[5];
    target[index[0]] = num[0];

    int temp;
    for (int i = 1; i < 5; i++)
    {
        //     int _index = index[i];
        //     int _num = num[i];
        for (int k = i - 1; k >= 0; k--)
        {
            temp = k;
            if (index[i] == index[k])
            {
                goto next;
            }
            else
            {
                continue;
            }
        }
    }
    // int nextin = index[i+1];
    // target[index[i]] = num[i];
next:
    printf("%d \t", temp);
    // for (int j = temp; j < 5; j++)
    // {
    //     target[j + 1] = target[j];
    // }

    // printing target
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", target[i]);
    }

    return 0;
}