#include <stdio.h>

int main()
{
    float a,b;
    printf("Enter no. 1: ");scanf("%f",&a);
    printf("Enter no. 2: ");scanf("%f",&b);
    int g;
    g = (a>b?1:0);
    if (g==0) printf("b is greatest ");
    else printf("a is greatest");
    return 0;
}
