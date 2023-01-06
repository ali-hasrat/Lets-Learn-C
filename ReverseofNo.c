//program to find reverse of no.
#include<stdio.h>
void main()
{
    int n,rem,rvs=0;
    printf("Enter the no.to be reversed:");
    scanf("%d",&n);
    for(;n!=0;)    //Or while(n!=0)
    {
    rem=n%10;
    n=n/10;
    rvs=rvs*10+rem;
    }
    printf("The reversed no.is:%d",rvs);
}
