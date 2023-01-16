//program to dynamically create an array of size 6 capable of storing 6 integer..
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(6*sizeof(int));
    printf("Enter the elements of array:");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("The value of array is:");
    for(int i=0;i<6;i++)
    {
        printf("\n%d",ptr[i]);
    }
    return 0;
}