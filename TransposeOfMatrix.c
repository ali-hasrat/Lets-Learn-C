#include<stdio.h>
void main()
{
    int arr[2][3],i,j,n;
    printf("The elements of matrix are:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is:");
    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf(" %d ",arr[i][j]);
        }
    }
    printf("\n And the Transpose of matrix is:");
    for(i=0;i<3;i++)             
    {                              
        printf("\n"); 
        for(j=0;j<2;j++)        
        {
            printf(" %d ",arr[j][i]);
        }
    }
}
