//program to delete any character in string

#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],d;
    int i,j,len;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the character to be deleted: ");
    scanf("%c",&d); 
    len=strlen(str); 
    for(i=0; i<len; i++)
    {
        if(str[i] == d)
        {
            for(j=i; j<len; j++)
            {
                str[j] = str[j+1];
            }
            len--;
            i--;
        }
    }
    printf("String after deletion is: ");
    puts(str);
    return 0;
}
