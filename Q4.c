#include <stdio.h>

int main()
{
    float a,b,c;
    printf("Enter no. 1: ");scanf("%f",&a);
    printf("Enter no. 2: ");scanf("%f",&b);
    printf("Enter no. 3: ");scanf("%f",&c);
    if (b>a && c>a) printf("\na is smallest");
    if (a>b && c>b) printf("\nb is smallest");
    if (a>c && b>c) printf("\nc is smallest");

    return 0;
}