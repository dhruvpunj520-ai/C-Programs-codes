#include <stdio.h>
int main()
{
   float minutes,hours;
   printf("Enter the time in minutes : ");
   scanf("%f",minutes);
   hours=minutes/60;
   printf("The value of hours :%f ",hours);
   return 0;
}
