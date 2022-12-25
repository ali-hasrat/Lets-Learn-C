#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of element in array:");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int position,element;
    printf("Enter the position where element to be inserted: ");
    scanf("%d",&position);
    printf("Enter the element into the position: ");
    scanf("%d",&element);
    if(position>n)
    printf("Invalid Input");
    else
    {
        for(i=n-1;i>=position-1;i--)
        arr[i+1]=arr[i];
        arr[position-1]=element;
        printf("Array after insertion is :\n");
        for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
    }
}