#include <stdio.h>
int main()

/*int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Your entered age is : %d\n", age);
    if(age>=18) {
        printf("\tYou can Vote!");
    }
        else{
            printf("You are not eligible to vote:(");
        */

{
    int ans;
    printf("In which subject(s) have you passed : \n");
    printf("Enter 1 if in Physics\n");
    printf("Enter 2 if in Maths\n");
    printf("Enter 3 if in Both\n");
    printf("Enter 4 if in None\n");
    scanf("%d", &ans);

    if (ans == 3)
    {
        printf("Your prize is 45/-");
    }
    else if (ans == 1)
    {
        printf("Your prize is 15/-");
    }
    else if (ans == 2)
    {
        printf("Your prize is 15/-");
    }
    else if (ans == 4)
    {
        printf("Better Luck Next Time!");
    }
    return 0;
}
