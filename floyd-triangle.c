//program to print floyd's triangle
#include<stdio.h>
void main()
{
    int n,c=1;
    scanf("%d",&n);
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
{
    printf("%d\t",c);
    c++;
}
printf("\n");
    }
}