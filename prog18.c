#include <stdio.h>
int main()
{
 float A,P,L,B;
 printf("Enter the value of lenght of rectangle : ");
 scanf("%f",&L);
 printf("Enter the value of breadth : ");
 scanf("%f",&B);
 A=L*B;
 P=2*L+2*B;
 printf("The value of area of square :%f",A);
 printf("The value of perimeter of square :%f",P);
 return 0;
 }
