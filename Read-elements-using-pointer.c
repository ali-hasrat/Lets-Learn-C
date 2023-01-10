//program to read elements using pointer 
#include <stdio.h>
#include <string.h>
int main()
{
    int i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered elements are: ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",*p);
        p++;
    }
    return 0;
}
