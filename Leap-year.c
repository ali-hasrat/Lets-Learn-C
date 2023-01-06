//program to check whether year is leap or not
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the year:");
    scanf("%d",&n);
    if((n%4==0) && ((n%400==0) || (n%100!=0)))
    {
        printf("%d is a leap year",n);
    }
    else
    {
      printf("\n%d is not a leap year",n);  
    }
}

