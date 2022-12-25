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
