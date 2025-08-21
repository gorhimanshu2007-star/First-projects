#include<stdio.h>
void main()
{
int a,b,c,p;
printf("Enter the length of rectangle :");
scanf("%d",&a);
printf("Enter the breath of rectangle :");
scanf("%d",&b);
p=4*(a+b);
c=a*b;
printf("The perimeter of rectangle is :%d\n",p);
printf("The area of rectangle is :%d",c);
}