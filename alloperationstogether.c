#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the first number :");
    scanf("%f",&a);
    printf("Enter the second number :");
    scanf("%f",&b);
    c=a/b;
    printf("The result after division is %f\n",c);
    c=a+b;
    printf("The result after addition is %f\n",c);
    c=a-b;
    printf("The result after substraction is %f\n",c);
    c=a*b;
    printf("The result after multiplication is %f",c);
}