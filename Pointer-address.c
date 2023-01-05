//program to show actual address and value of variable
#include<stdio.h>
int main()
{
    int a;
    printf("Take Input:");
    scanf("%d",&a);
    int *p=&a;
    printf("The actual address of a: %d",p);
    printf("\nThe actual value of a: %d",*p);
}