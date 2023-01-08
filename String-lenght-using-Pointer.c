//program to find length of string using pointer
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char *p=str;
    int i=0;
    printf("Enter the String:");
    gets(str);
    while(*p!='\0') 
    {
        if(*p!=' ')
        i++;
        p++;
    }
    printf("%d",i);
    return 0;
}