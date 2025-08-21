#include<stdio.h>
void main()
{
    float a,b,c,d;
    printf("Enter the gross salary :");
    scanf("%f",&a);
    b=a/10;//allowance//
    c=a*3/100;//deduction//
    d=a+b-c;
    printf("The net salary is :%f",d);

}