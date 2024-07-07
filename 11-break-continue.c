#include <stdio.h>
int main()

{
    // // break

    // int i, age;
    // for (i = 1; i <= 5; i++)
    // {
    //     printf("S.No. %d \n Enter your age : \n", i);
    //     printf("Enter 0 to exit \n");
    //     scanf("%d", &age);
    //     if (age >= 13 && age <= 19)
    //     {
    //         printf("Your age is : %d\n", age);
    //         printf("Hello Teenager \n");
    //     }
    //     else if (age >= 20)
    // //     {
    //         printf("Hello Adult \n");
    //     }
    //     else if (age == 0)
    //     {
    //         break;
    //     }
    // }

    // continue

    for (int i = 1; i >= 1 && i <= 10; i++)
    {
        if (i == 6) //skip
            continue;
        printf("%d \n", i);
    }

    return 0;
}