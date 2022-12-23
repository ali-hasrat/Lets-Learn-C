#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)    /*length & breadth of rectangular box
                               can be changed by changing initialization 
                               value of i,j else it will print square box..*/
     {
        for(int j=0;j<=n;j++)
        {
            if(i==2 || i==n || j==0 || j==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}