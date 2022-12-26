#include<stdio.h>
void main()
{
    int arr[2][3],i,j,n;    
    //we can change the order of matrix by changing size Or we can take size from user after using function scanf("");
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
