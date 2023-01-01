//program to find total months and remaining days..

#include<stdio.h>
int main()
{
    int days,months;
    printf("Enter the no. of days:");
    scanf("%d",&days);
    months=days/30;      //each months consider to have 30 days per months
    days=days%30;
    printf("Months:%d\nDays:%d",months,days);
}