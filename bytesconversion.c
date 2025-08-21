#include <stdio.h>
void main()
{
    float a,b,c,d;
    printf("Enter number of bytes :");
    scanf("%f",&a);
    b=a/1024;
    printf("Bytes in kb are :%f\n",b);
    c=b/1024;
     printf("Bytes in mb are :%f\n",c);
     d=c/1024;
      printf("Bytes in gb are :%f",d);

}