//program to compare strings using pointer
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    char *p=str1,*q=str2;
    printf("Enter the 1st string: ");
    gets(str1);
    printf("Enter the 2nd string: ");
    gets(str2);
    if(!strcmp(p,q))
    {
    printf("String are same");
    }
    else
    {
      printf("String are not same");  
    }
    return 0;
}