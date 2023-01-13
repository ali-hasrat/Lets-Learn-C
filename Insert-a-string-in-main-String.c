//Program to insert a string in the main text..
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[50],str[150];
    int pos;
    fflush(stdin);
    printf("Enter the String:");
    gets(str1);
    printf("Enter the string to be insert:");
    gets(str2);
    printf("Enter the position at which we want to insert:");
    scanf("%d",&pos);
    int i=0,j=0,k=0;
    while(str1[i]!='\0')
    {
        if(i==pos)
        {
            while(str2[k]!='\0')
            {
                str[j]=str2[k];
                j++;
                k++;
            }
        }
        else
        {
            str[j]=str1[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
    printf("\n The new string is:");
    puts(str);
    return 0;
}