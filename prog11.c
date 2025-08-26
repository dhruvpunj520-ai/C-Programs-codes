#include <stdio.h>
int main()
 {
  float grams,kilograms;
  printf("Enter the value in grams: ");
  scanf("%f",&grams);
  kilograms=grams/1000;
  printf("The value in kilograms : %.2f",kilograms);
 return 0 ;
 }
