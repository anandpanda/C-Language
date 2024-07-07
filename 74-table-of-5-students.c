#include <stdio.h>
#include <string.h>

typedef struct students
{
    char name;
    int roll;
    char course[10];
} stu;

int main()
{
    stu stud[4];
    stud[0].name = 'A';
    stud[0].roll = 1;
    strcpy(stud[0].course, "CSE");

    stud[1].name = 'B';
    stud[1].roll = 2;
    strcpy(stud[1].course, "IT");

    stud[2].name = 'C';
    stud[2].roll = 3;
    strcpy(stud[2].course, "ECE");

    stud[3].name = 'D';
    stud[3].roll = 4;
    strcpy(stud[3].course, "COE");

    FILE *fptr;

    fptr = fopen("Table of Students.txt", "w");

    fprintf(fptr, "%s", "NAME\tROLL NO.\tCOURSE\n");

    fprintf(fptr, "%c\t\t%d\t\t\t%s\n", stud[0].name, stud[0].roll, stud[0].course);
    fprintf(fptr, "%c\t\t%d\t\t\t%s\n", stud[2].name, stud[2].roll, stud[2].course);
    fprintf(fptr, "%c\t\t%d\t\t\t%s\n", stud[1].name, stud[1].roll, stud[1].course);
    fprintf(fptr, "%c\t\t%d\t\t\t%s\n", stud[3].name, stud[3].roll, stud[3].course);

    fclose(fptr);

    return 0;
}