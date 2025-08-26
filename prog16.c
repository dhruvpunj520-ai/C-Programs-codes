#include <stdio.h>
int main()
 {
 float I,P,R,N;
 printf("Enter the value of P : ");
 scanf("%f",&P);
 printf("Enter the value of R : ");
 scanf("%f",&R);
 printf("Enter the value of N : ");
 scanf("%f",&N);
 I=P*R*N/100;
 printf("The value of I is:%f",I);
 return 0 ;
 }
