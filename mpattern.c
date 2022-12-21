#include<stdio.h>
void main()
{
 int i,j,k,l,m;
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=1;j++)
  {
   printf("*");
  }
  for(k=1;k<=i;k++)
    {
    printf(" ");
 }
 for(j=1;j<=1;j++)
  {
   printf("*");
  }
  for(m=4;m>=i;m--)
  {
   printf("  ");
  }
  for(j=1;j<=1;j++)
  {
   printf("*");
  }
  for(k=1;k<=i;k++)
  {
   printf(" ");
  }
  for(j=1;j<=1;j++)
  {
   printf("*");
  }
 
 printf("\n");
 }
}