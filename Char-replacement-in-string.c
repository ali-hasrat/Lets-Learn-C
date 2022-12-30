//program to replace character in string

#include<stdio.h>
int main()
{
    char str[30],c,r;
    int i=0;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the character to be replaced: ");
    scanf("%c",&c);
    printf("Enter new character :");
    scanf(" %c",&r);
    while(str[i]!='\0')
    {
        if(str[i]==c)
        {
            str[i]=r;
        }
        i++;
    }
    printf("String after replacement is: ");
    puts(str);
    return 0;
}