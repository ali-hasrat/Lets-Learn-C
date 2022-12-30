//program to reverse a string

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter the String:");
    gets(str);
    printf("The reversed string is:%s",strrev(str));
    return 0;
}