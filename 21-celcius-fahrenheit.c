#include <stdio.h>

int main()
{
    char grd;
    printf("Enter 'C' for Celcius and 'F' for Fahenheit. \n");
    scanf("%c", &grd);

    if (grd == 'F')
    {
        float far;
        printf("Enter temperature in Fahenheit : ");
        scanf("%f", &far);
        float cel = (far - 32) * ((float)5 / 9);
        printf("%f F = %f C", far, cel);
    }
    else if (grd == 'C')
    {
        float cel;
        printf("Enter temperature in Celcius : ");
        scanf("%f", &cel);
        float far = (cel * 9.0 / 5.0) + 32;
        printf("%f C = %f F", cel, far);
    }

    return 0;
}