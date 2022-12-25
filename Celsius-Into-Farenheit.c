/*//method-1
#include<stdio.h>
int main()
{
    int hr,min,sec;
    printf("time in sec:");
    scanf("%d",&sec);
    hr=sec/3600;
    min=(sec-(3600*hr))/60;
    sec=(sec-(3600*hr)-(min*60));
    printf("%d hr  %d min  %d sec",hr,min,sec);
    return 0;

}
//method-2
#include<stdio.h>
int main()
{
    int hr=0,min,sec;
    printf("time in sec:");
    scanf("%d",&sec);
    min=sec/60;
    sec=sec%60;
    if(min>=60)
    {
        hr=min/60;
        min=min%60;
    }
    if(hr!=0)
    {
        printf("%d hr  %d min  %d sec",hr,min,sec);
    }
    else if(hr==0)
    {
        printf("%d min  %d sec",hr,min);
    }
return 0;
}
*/
//method-1
#include<stdio.h>
int main()
{
    float clc,frn;
    printf("celcius:");
    scanf("%f",&clc);
    frn=(clc*9/5)+32;
    printf("frnt:%f\n",frn);
    return 0;
    }
    /*//method-1
    #include<stdio.h>
    int main()
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("before swapping a=%d\nb=%d\n",a,b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("after swapping a=%d\nb=%d",a,b);
        return 0;
    }

    //method-1
    #include <stdio.h>
    int main()
    {
	int a,b;
	scanf("%d%d",&a,&b);
    printf("before swap:a=%d\nb=%d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
    printf("After swap:a=%d\nb=%d\n",a,b);
	return 0;
}

#include<stdio.h>
int swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
printf("after swap:a=%d\nb=%d",a,b);
}
void main()
{
int a,b,c;
scanf("%d%d",&a,&b);
printf("before swap:a=%d\nb=%d\n",a,b);
swap(a,b);
//printf("after swap:a=%d\nb=%d",a,b);
}

//method-1

#include<stdio.h>
void main()
{
    int n,i,m=0,s=0;
    printf("Enter the number to check prime no.");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
    {
 printf("\nthe number is not prime");
 s=1;
 break;
 }
  }
if(s==0)
printf("number is prime");
}


//method-2
#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i<=i;i++)
    {
        if(n%i==0)
        continue;

    }
}
void main()
{
    int i,num,res=0;
    printf("enter a number:");
    scanf("%d",&num);
    res=prime(num);             ******
    if(res==0)
    printf("%d is not a prime number",num);
    else
    printf("%d is prime number",num);

}

//method-1
#include<stdio.h>
void main()
{
    int n,c;
    printf("enter the no. to which prime no. to be found:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        c=0;
        for(int a=2;a<=i/2;a++)
        {
            if(i%a==0)
            {
                c++;
                break;
            }
        }
        if(c==0 && i!=1)
        {
            printf("%d\t",i);
        }
    }
}

//method-1
#include <stdio.h>
int main()
{
    int i,n;  
    int SumofOdd=0,SumofEven=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)  
           SumofEven=SumofEven+i;
        else
            SumofOdd=SumofOdd+i;
    }
    printf("Sum of all even numbers are: %d\n",SumofEven);
    printf("Sum of all odd numbers are: %d",SumofOdd);
    return 0;
}
//method-1
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
   */