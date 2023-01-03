//program to count the number of negative, positive and zero array elements.

#include<stdio.h>
int main()
{
   int n;
   printf("Enter the size of array:");
   scanf("%d",&n);
   int arr[n];
   int x=0,y=0,z=0;
   printf("Enter the elements of array:");
   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
    if(arr[i]==0)
    x++;
    else if(arr[i]>0)
    y++;
    else
    z++;
   }
   printf("The count of zero elements are: %d",x);
   printf("\nThe count of positive elements are: %d",y);
   printf("\nThe count of negative elements are: %d",z);
   return 0;
}