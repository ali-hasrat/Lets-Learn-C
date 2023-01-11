#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i=0,a=1,b=1;
    printf("Enter the String:");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
        a++;
        }
          i++;

        if(str[i]=='\n' || i==20)   // Here, i=20 means 1st line changed after 20 character
        {
            b++;
        }

    }
    printf("Words count in String is=%d",a);
    printf("\nTotal character in string=%d",strlen(str));
    printf("\nLines count in String is=%d",b);
    return 0;
}
