//program to sort a string by character
#include<stdio.h>
#include<string.h>
int main()
{
   char str[100],n;
   int i,j,len;
   printf("Enter the string:");
   gets(str);
   len=strlen(str);
   for(i=0;i<len;i++)
   {
      for(j=0;j<len-1;j++)
      {
         if(str[j]>str[j+1])
         {
            n=str[j];
            str[j]=str[j+1];
            str[j+1]=n;
         }
      }
   }
   printf("string after sort: %s",str);
   return 0;
}