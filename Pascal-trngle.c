//program to print pascal triangle pattern
#include <stdio.h>
void main()
{
    int n,c=1,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf("  ");
        for(k=0;k<=i;k++)
        {
            if (k==0||i==0)
                c=1;
            else
               c=c*(i-k+1)/k;
            printf("%4d",c);
        }
        printf("\n");
    }
}
