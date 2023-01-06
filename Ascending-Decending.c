//program to print elements in ascending and decending order
#include<stdio.h>
int main()
{
    int i,j,a,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("The elements are: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++) 
        {
            for(j=i+1;j<n;j++)
            {
                if (arr[i]>arr[j]) 
                {
                    a=arr[i];
                    arr[i]=arr[j];
                    arr[j]=a;
                }  
             }
        }
        printf("Elements in ascending order is given by: ");
        for (i=0;i<n;i++)
        printf("%d ",arr[i]);
        for(i=0;i<n;i++) 
        {
            for(j=i+1;j<n;j++)
            {
                if (arr[i]<arr[j]) 
                {
                    a=arr[i];
                    arr[i]=arr[j];
                    arr[j]=a;
                }  
             }
        }
        printf("\nElements in decending order is given by: ");
        for (i=0;i<n;i++)
        printf("%d ",arr[i]);
        return 0;
}
