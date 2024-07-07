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
    // initializing structures

    struct student s1;
    s1.roll = 5;
    s1.cgpa = 9.7;
    // s1.name = "Anand"; // string of array type are immutable
    strcpy(s1.name, "Anand");

    printf("Student Name : %s\n", s1.name);
    printf("Student Roll No. : %d\n", s1.roll);
    printf("Student CGPA : %0.2f\n", s1.cgpa);

    struct student s2;
    s2.roll = 12;
    s2.cgpa = 9.0;
    strcpy(s2.name, "Sachin");

    printf("Student Name : %s\n", s2.name);
    printf("Student Roll No. : %d\n", s2.roll);
    printf("Student CGPA : %0.2f\n", s2.cgpa);

    struct student s3 = {"Mohit", 15, 8.9};
    struct student s4 = {0};

    printf("Roll No. of student 3 : %d\n", s3.roll);

    return 0;
}
