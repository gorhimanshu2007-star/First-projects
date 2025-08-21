#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("After swaping the number are %d,%d",a,b);
 
}