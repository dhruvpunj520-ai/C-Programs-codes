#include <stdio.h>
int main()
{
 float s1,s2,s3,T,A;
 printf("Enter the marks of 3 subjects : ");
 scanf("%d%d%d",&s1,&s2,&s3);
 T=s1+s2+s3;
 A=T/3;
 printf("Total marks of three subjects :%f",T);
 printf("Average marks of three subjects :%f",A);
 return 0;
}
