// program to print positions of searched element of array

#include<stdio.h>
void main()
{
    int i,n,num,a=0;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    int arr[n],arr2[n];
    printf("Enter the element 0f array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
      if(arr[i]==num)
        {
            arr2[a]=i+1;
            a++;
        }
    }
    if(a!=0)
    {
        printf("Item found at:\n");
        for(i=0;i<a;i++)
        {
            printf("%d\n",arr2[i]);
        }
    }
    else
    {
        printf("\nItem not found ");
    }
}