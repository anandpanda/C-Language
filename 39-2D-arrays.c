#include <stdio.h>

int main()
{
    // int arr[2][2] = {{1,2},{3,4}};
    // [][] defines dimensions
    // each {} is an individual array, one below the previous, vizualize in form of matrix

    // marksof 2 students in 3 subjects

    int marks[2][3] = {{98, 54, 97}, {78, 89, 98}};
    printf("%d", marks[1][0]);

    return 0;
}