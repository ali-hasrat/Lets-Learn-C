#include <stdio.h>
#include <math.h>
void main()
{
   int a,b,c,d,i;
   float x1,x2,imag;
   printf("Enter the value of a,b & c:");
   scanf("%d%d%d",&a,&b,&c);
   d=b*b-4*a*c;
   if(d==0)
   {
     printf("Both roots are equal\n");
     x1=-b/(2*a);
     x2=x1;
     printf("Root1= %f\n",x1);
     printf("Root2= %f\n",x2);
   }
   else if(d>0)
	{
	   printf("Both roots are real and diff.\n");
	   x1=(-b+sqrt(d))/(2*a);
	   x2=(-b-sqrt(d))/(2*a);
	   printf("Root1= %f\n",x1);
	   printf("Root2= %f\n",x2);
	}
	else
	{
	   printf("Root are imaginary\n");
      x1=x2 = -b/(2*a);
        imag= sqrt(-d)/(2*a);
        printf("Root1=%.2f+i%.2f \nRoot2=%.2f-i%.2f", x1,imag,x2,imag);
    }
}
