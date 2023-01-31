#include <stdio.h>

int main()
{
    float a;
    printf("Enter the number: ");scanf("%f",&a);
    if (a>0) printf("\nPositive");
    if (a==0) printf("\nZero");
    if (a<0) printf("\nNegetive");
    return 0;
}