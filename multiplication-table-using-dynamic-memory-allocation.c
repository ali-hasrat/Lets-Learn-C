//program to create a multiplication table using dynamic memory allocation..
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,i;
    ptr=(int*)malloc(10*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory is not allocated ");
        exit(0);
    }
    else
    {
        printf("Multiplication table of 7 upto 10 :\n");
        for(i=1;i<=10;i++)
        {
            printf("%d * %d = %d\n",7,i,7*i);
        }
    }
    // now using realloc to make it store upto 15
    ptr=(int*)realloc(ptr,15*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory is not allocated ");
        exit(0);
    }
    else
    {
        printf("Multiplication table of 7 upto 15 :\n");
        for(int i=10;i<=15;i++) 
        {
            ptr[i]=i+1;
        }
        for(i=1;i<=15;i++)
        {
            printf("%d * %d = %d \n",7,i,7*i);
        }
    }
    return 0;
}