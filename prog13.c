#include <stdio.h>
int main()
 {
  float bytes,kb,mb,gb ;
  printf("Enter the value in bytes : ");
  scanf("%f",&bytes);
  kb=bytes/1024;
  mb=kb/1024;
  gb=mb/1024;
  printf("The value in kb : %f \n",kb);
  printf("The value in mb:%f \n",mb);
  printf("The value in gb:%f \n",gb);
 return 0 ;
 }
