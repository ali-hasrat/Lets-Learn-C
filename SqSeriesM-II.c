#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b;
    printf("Enter the no. :");
    scanf("%d",&n);
    for(b=1;b<=n;b++)
    {
      a=pow(-1,(b-1))*b*b;
      printf("  %d",a);
    }
    return 0;
}