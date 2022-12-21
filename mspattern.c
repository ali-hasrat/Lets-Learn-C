// how to print m shape pyramid in c
#include<stdio.h>
int main()
{

 int num=5,r,c;
 for(r=1; r<=num; r++)
 {
  for(c=1; c<=num; c++)
  {
    if( (c==2 || c==3 || c==4) && (r==1) )
      printf(" ");
    else if( (c==3) && (r==2) )
      printf(" ");
    else if( (c==2 || c==4) && (r==3) )
      printf(" ");
    else if( (c==2 || c==3 || c==4 ) && (r==4 || r==5) )
       printf(" ");
    else
       printf("*");
   }
   printf("\n");
 }
 return 0;
}
