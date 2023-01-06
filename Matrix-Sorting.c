//program to sort all elements of 2-D array
#include<stdio.h>
int main()
{
    int i,j,k,m,n;
    printf("Enter the row and column of matrix: ");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    printf("The elements are: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(arr[i][j]>arr[i][k])
                {
                    int a=0;
                    a=arr[i][j];
                    arr[i][j]=arr[i][k];
                    arr[i][k]=a;
                }
            }
        }
    }
    printf("The sorted matrix is :\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}