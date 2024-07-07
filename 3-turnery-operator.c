#include <stdio.h>
int main()

{
    int a;
    printf("Enter a num : ");
    scanf("%d", &a);
    a >= 5 ? printf(" Its >= 5 \n"), printf(" Hello") : printf("Its <= 5");

    return 0;
}