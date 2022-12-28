#include<stdio.h>
int main()
{
    int i,n,min,max;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element 0f array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        min=arr[i];
        if(max<arr[i])
        max=arr[i];
    }
    printf("Minimum of array:%d",min);
    printf("\nMaximum of array:%d",max);
}