//program to concate two string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    char *p=str1,*q=str2;
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
    printf("String after concate: ");
    printf("%s",strcat(p,q));
    return 0;
}
