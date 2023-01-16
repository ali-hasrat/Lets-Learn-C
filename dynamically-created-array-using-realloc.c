//an array dynamically capable of storing 5 integer.
//after that use realloc so that now it can store 10 integers..
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));
    printf("Enter the elements of array of size 5:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("The value of array of size 5 is:");
    for(int i=0;i<5;i++)
    {
        printf("\n%d",ptr[i]);
    }
    //now going to increase its size to 10 using realloc
    ptr=realloc(ptr,10*sizeof(int));
    printf("\nEnter the elements of array of size 10:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("The new array of size 10 is:");
    for(int i=0;i<10;i++)
    {
        printf("\n%d",ptr[i]);
    } 
    return 0;
}