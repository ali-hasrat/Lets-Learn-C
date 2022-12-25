//method-1
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
