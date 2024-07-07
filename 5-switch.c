#include <stdio.h>
int main()
{
    int age, weight;
    printf("what is your age : ");
    scanf("%d", &age);
    switch (age)
    {
    case 18:
        printf("what is your weight : ");
        scanf("%d", &weight);
        switch (weight)
        {
        case 55:
            printf("Your age is %d, weight is %d and you are eligible for army training", age, weight);
            break;
        default:
            printf("Your are not eligible for army training.");
            break;
        }
        break;
    case 22:
        printf("what is your weight : ");
        scanf("%d", &weight);
        switch (weight)
        {
        case 60:
            printf("Your age is %d, weight is %d and you are eligible for army training", age, weight);
            break;
        default:
            printf("Your are not eligible for army training.");
            break;
        }
        break;
    default:
        printf("Your are not eligible for army training.");
        break;
    }

    return 0;
}

/*Eligibility criteria for army training;-
Age    Weight
18        55Kg
22        60kg*/