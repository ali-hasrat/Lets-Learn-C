// program to calculate XA+YB  where A and B are matrices and X=2 and Y=3
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the Order of Matrix A & B: ");
    scanf("%d",&n);
    //size of both matrix is same because only then we can add two matrix
    int arr1[n][n],arr2[n][n];
    printf("Enter the elements of Matrix A:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&arr1[i][j]);
    }
    }
    printf("Enter the elements of Matrix B:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&arr2[i][j]);
    }
    }
    printf("Matrix A:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d",2*arr1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d",3*arr2[i][j]);
        }
        printf("\n");
    }
    printf("The value of XA+YB:\n");  //Where X=2 & Y=3 and A,B is matrix
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d",2*arr1[i][j]+3*arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
