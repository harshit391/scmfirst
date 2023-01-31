#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");scanf("%d",&a);
    int fact=1;
    for (int i=1;i<a+1;i++)
    {
        fact = fact*i;
    }
    printf("\n%d",fact);
    return 0;
}