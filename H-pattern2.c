#include<stdio.h>
int main()
{

 int r,c;
 for(r=1; r<=6; r++)
 {
  for(c=1; c<=4; c++)
  {
    if( (c==2 || c==3) && (r==1) )
      printf(" ");
    else if( (c==2||c==3) && (r==2) )
      printf(" ");
    else if( (c==2 || c==3) && (r==5 || r==6) )
       printf(" ");
    else
       printf("*");
   }
   printf("\n");
 }

    return 0;
    }