//program to print elements of three dimensional array using pointer..
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the size of depth:");
    scanf("%d",&a);
    printf("Enter the size of row:");
    scanf("%d",&b);
    printf("Enter the size of column:");
    scanf("%d",&c);
    printf("Enter the elements in 3D-array:");
    int arr[a][b][c]; //if depth,row & column are of diffrent size
    int *p=&arr[a][b][c],i,j,k;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            for(k=0;k<c;k++)
            {
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    printf("Display elements of 3-D array:");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            for(k=0;k<c;k++)
            {
                printf("\n%d",*(*(*(arr+i)+j)+k));
            }
        }
    }
    return 0;    
}