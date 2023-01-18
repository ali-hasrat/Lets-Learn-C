//program to read three integer from a file..
#include<stdio.h>
int main()
{
    int n;
    FILE *ptr=NULL;
    ptr=fopen("Hasrat0.txt","r");  //Hasrat0.txt is a Plain File storing three integer value
    fscanf(ptr,"%d",&n);
    printf("this show integer: %d",n);
    return 0;
}