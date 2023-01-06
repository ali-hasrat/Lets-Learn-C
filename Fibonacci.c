//program to print Fibonaci sequence
#include<stdio.h>
int main()
{

  int _1st=0,_2nd= 1,_3rd,i,n;
  printf ("Enter the length of the fibonacci series:");
  scanf ("%d", &n);
  printf ("The Fibonacci series is:\n");
  printf ("%d\t%d\t",_1st,_2nd);
  for (i=2; i<=n;i++)
  {
    _3rd= _1st+_2nd;
    printf ("%d\t",_3rd);
    _1st=_2nd;
    _2nd=_3rd;
    }
   return 0;
   }
