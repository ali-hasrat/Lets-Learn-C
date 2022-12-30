//program to count words in string

#include<stdio.h>
int main()
{
    char str[50];
    int a=1,i=0;
    printf("Enter the string: ");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
        a++;
        }
          i++;
    
    }
    printf("Words count in String is: %d",a);
    return 0;
}