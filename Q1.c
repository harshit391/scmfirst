#include <stdio.h>

int main()
{
    float a,b;
    printf("Enter no. 1: ");scanf("%f",&a);
    printf("Enter no. 2: ");scanf("%f",&b);

    float add=a+b,mul=a*b;
    printf("\nAddition of numbers are: %.2f\n\nMultiplication of numers are: %.2f",add,mul);
    return 0;
}
