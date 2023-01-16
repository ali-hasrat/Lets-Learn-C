//program to merge two shorted array
#include<stdio.h>
int main()
{
    int m,n,i;
    printf("Enter the size of array 1:");
    scanf("%d",&m);
    printf("Enter the size of array 2:");
    scanf("%d",&n);
    int arr1[m],arr2[n],arr[m+n];
    printf("Enter elements of array 1:");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter elements of array 2:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    for(i=0;i<m;i++)
    {
        arr[i]=arr1[i];
    }
    for(int i=0,j=m;j<(m+n) && i<n;i++,j++)
    {
        arr[j]=arr2[i];
    }
    printf("Merge two array:");
    for(i=0;i<m+n;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}