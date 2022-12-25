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
