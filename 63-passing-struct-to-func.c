#include <stdio.h>
#include <string.h>

// structures are user defined data type

struct student // this the datatype
{
    char name[30];
    int roll;
    float cgpa;
};

void printinfo(struct student s1);

int main()
{
    // initializing structures

    struct student s1 = {"Anand", 5, 9.7};
    printinfo(s1);

    return 0;
}

void printinfo(struct student s1) // call by value
{
    printf("Student Name : %s\n", s1.name);
    printf("Student Roll No. : %d\n", s1.roll);
    printf("Student CGPA : %0.2f\n", s1.cgpa);
}