//program to Sort a list of name in alphabetical order
#include<stdio.h>
#include<string.h>
int main()
{
   int i,k,n;
   printf("Enter the total no. of names: ");
   scanf("%d",&n);
   fflush(stdin);
   char str[100][100],a[100];
   printf("Enter the names: ");
   for(i=0;i<n;i++)
   {
    gets(str[i]);
   }
   for(i=0;i<=n;i++)
   {
    for(k=i+1;k<=n;k++)
    {
        if(strcmp(str[i],str[k])>0)
        {
            strcpy(a,str[i]);
            strcpy(str[i],str[k]);
            strcpy(str[k],a);
        }
    }
   }
   printf("\nString after sort: ");
   for(i=0;i<=n;i++)
   printf("%s\n",str[i]);
   return 0;
}