#include <stdio.h>
#include <string.h>

typedef struct vectors
{
    int x;
    int y;
} vec;

void vecsum(vec v1, vec v2);

int main()
{
    vec v1 = {3, 4};
    vec v2 = {6, 8};

    printf("Vector 1 is : %di + %dj \n", v1.x, v1.y);
    printf("Vector 2 is : %di + %dj \n", v2.x, v2.y);

    vecsum(v1, v2);

    return 0;
}

void vecsum(vec v1, vec v2)
{
    printf("Sum of Vectors : %di + %dj \n", v1.x + v2.x, v1.y + v2.y);
}
