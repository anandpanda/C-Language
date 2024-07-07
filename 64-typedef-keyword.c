#include <stdio.h>
#include <string.h>

// structures are user defined data type

typedef struct student
{
    char name[30];
    int roll;
    float cgpa;
} stu; // alias

int main()
{

    struct student s3 = {"Mohit", 15, 8.9};
    stu s1 = {"Anand", 5, 9.7}; // use of alias

    return 0;
}