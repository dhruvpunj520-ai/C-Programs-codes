#include <stdio.h>
int main()
{
 float g,a,d,n;
 printf("Gross salary : ");
 scanf("%f",&g);
 printf("Allowance : ");
 scanf("%f",&a);
 printf("Deduction : ");
 scanf("%f",&d);
 a=g*0.1;
 d=g*0.03;
 n=g+a-d;
 printf("Net salary :%f",n);
 return 0;
 }
