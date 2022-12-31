//projram to find sum of diajonal element of matrix

#include<stdio.h>
void main()
{
    int i,j,n,sum=0;
    printf("The order of matrix:");
    scanf("%d",&n);
    int arr[n][n];
    printf("The elements of matrix are:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is:");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf(" %d ",arr[i][j]);
        }
    }
    printf("\n The sum of diajonal element of matrix is:");
    for(i=0;i<n;i++)
    {
        //printf("\n");
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
               sum=sum+arr[i][j];
            }
        }
    }
    printf(" %d ",sum);
}
