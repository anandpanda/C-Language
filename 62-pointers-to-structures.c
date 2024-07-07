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
    struct student s3 = {"Mohit", 15, 8.9};

    // pointers to structures

    struct student *ptr = &s3;

    printf("Name : %s\n", (*ptr).name);
    printf("Roll No. : %d\n", (*ptr).roll);
    printf("CGPA : %f\n", (*ptr).cgpa);

    // arrow operator
    printf("Roll No. : %d\n", ptr->roll);

    return 0;
}