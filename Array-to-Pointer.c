//program to demonstrate array to pointer
#include<stdio.h>
int main()
{
    int n,i;
    int *a[n];
    printf("Enter the size of array b: ");
    scanf("%d",&n);
    int b[n];
    printf("Enter the elements of array b:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    a[i]=&b[i];   //pointing to whole address of array b
    printf("Print the elements:");
    for(i=0;i<n;i++)
    {
    printf("\n%d ",*(*a+i));    //or *a[i]
    }
   return 0;
}