//program to print transpose of a matrix
#include<stdio.h>
void main()
{
    int i,j,m,n;     //int arr[15][15] --- Here instead of 15, we can write any order of size.
    printf("no. of rows and columns:");
    scanf("%d %d",&m,&n);
    int arr[m][n];
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
    printf("\n And the Transpose of matrix is:");     //Means changing Row into Column
    for(i=0;i<3;i++)                                  //So we will just reverse the size i.e, i size into j and vice versa
    {                                          
        printf("\n"); 
        for(j=0;j<2;j++)        
        {
            printf(" %d ",arr[j][i]);
        }
    }
}
