#include <stdio.h>
int main()
{
 float a,b,temp;
 printf("Enter first number : ");
 scanf("%f",&a);
 printf("Enter second number : ");
 scanf("%f",&b);
 temp=a;
 a=b;
 b=temp;
 printf("first number=%f",a);
 printf("second number=%f",b);
 return 0;
}
