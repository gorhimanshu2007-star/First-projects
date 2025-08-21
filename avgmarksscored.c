#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("Enter marks scored in phy :");
    scanf("%d",&a);
    printf("Enter marks scored in chem :");
    scanf("%d",&b);
    printf("Enter marks scored in maths :");
    scanf("%d",&c);
    d=a+b+c;
    e=d/3;
    printf("The average marks scored is :%d\n",e);
    printf("The sum of marks scored :%d",d);
}