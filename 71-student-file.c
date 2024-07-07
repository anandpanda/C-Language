#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int roll;
    float cgpa;

    FILE *fptr;
    fptr = fopen("student.txt", "w");

    printf("Enter Name : ");
    scanf("%s", name);
    printf("Enter Roll No. : ");
    scanf("%d", &roll);
    printf("Enter CGPA : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Name : %s\n", name);
    fprintf(fptr, "Roll No. : %d\n", roll);
    fprintf(fptr, "CGPA : %0.2f", cgpa);

    fclose(fptr);
    return 0;
}