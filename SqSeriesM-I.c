//program to print alternative sign of square series
#include<stdio.h>
int main()
{
    int n=1,i;
    printf("Enter the no. :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i*i);
        }
        else
        {
            printf("%d ",-i*i);
        }
    }
    return 0;
}
