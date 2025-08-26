#include <stdio.h>
int main()
 {
  float grams,kilograms;
  printf("Enter the value in kilograms: ");
  scanf("%f",&kilograms);
  grams=kilograms*1000;
  printf("The value in grams : %.2f",grams);
 return 0 ;
 }
