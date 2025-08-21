#include<stdio.h>
void main()
{
float a,b,c,d;
printf("Enter principle amount :");
scanf("%f",&a);
printf("enter the rate of interest :");
scanf("%f",&b);
printf("enter the time in years :");
scanf("%f",&c);
d=a*b*c/100;
printf("The interest is :%f",d);
}