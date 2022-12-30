//program to length of string

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int a=0;
    printf("Enter the String:");
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!=' ')
        a++;
    }
   printf("Total no. of words in string: %d",a);
   return 0;
}