#include<stdio.h>
void main()
{
    float a,b,d;
    printf("Enter the gross sales :");
    scanf("%f",&a);
    b=a/10;//discount//
    d=a-b;
    printf("The net sales is :%f",d);

}