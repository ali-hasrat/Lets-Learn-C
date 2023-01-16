//program to find maximum no. using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,max,n,*ptr;
    printf("Enter the size of array:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the elements of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
    if(*ptr<*(ptr+i))
    *ptr=*(ptr+i);
    }
        printf("The maximum value of array is: %d",*ptr);
    return 0;
}