#include <stdio.h>
int main()
{
 float g,d,n;
 printf("Gross sales : ");
 scanf("%f",&g);
 printf("Discount of gross sales : ");
 scanf("%f",&d);
 n=g-0.1*d;
 printf("Net sales :%f",n);
 return 0;
}
