#include<stdio.h>
int main()
{
    int n,a,ans=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    int x=n;
        while(n!=0)
        {
            a=n%10;
            ans=ans*10+a;
            n=n/10;
        }
        if(x==ans)
        {
            printf("Palindrome Number");
        }
        else
        {
        printf("Not a Palindrome Number");
        }
    return 0;
}