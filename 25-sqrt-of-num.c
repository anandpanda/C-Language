#include <stdio.h>

int main()
{
    float i, num;
    printf("Enter the num : ");
    scanf("%f", &num);

    // for (i = 0.0000001; i * i <= num; i += 0.0000001); // Time Complex
    // printf("%.6f", i);

    // Newton Raphson Method

    double temp, sqrt;
    sqrt = num;
    temp = 0;
    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = (num / temp + temp) / 2;
    }
    printf("%lf", sqrt);

    return 0;
}