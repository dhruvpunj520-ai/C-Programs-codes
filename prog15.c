#include <stdio.h>
int main()
 {
 float celcius,fahrenheit;
 printf("Enter the temperature in fahrenheit : ");
 scanf("%f",&fahrenheit);
 celcius=5*(fahrenheit-32)/9;
 printf("The value of temperature in celcius:%f \n",celcius);
 return 0 ;
 }
