#include <stdio.h>
#include <string.h>

// structures are user defined data type

struct student // this the datatype
{
    char name[30];
    int roll;
    float cgpa;
};

int main()
{
    // array of structures

    struct student ece[5];
    ece[0].roll = 13;
    ece[0].cgpa = 9.2;
    strcpy(ece[0].name, "Shradha");

    printf("Name : %s\n", ece[0].name);
    printf("Roll : %d\n", ece[0].roll);
    printf("CGPA : %0.2f\n", ece[0].cgpa);

    return 0;
}