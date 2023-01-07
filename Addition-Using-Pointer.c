//program to add two no. using pointer
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of a and b:");
    scanf("%d%d",&a,&b);
    int *p=&a;
    int *q=&b;
    printf("sum of two no=%d",*p+*q);
    return 0;
}

//program to add n no. using pointer
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    int *p[n];
    printf("Enter the elements to be added:");
    for(i=0;i<n;i++)
      {
         scanf("%d",&arr[i]);
      }
      for(i=0;i<n;i++)
        {
           p[i]=&arr[i];
           sum+=*p[i];
        }
    printf("The sum of all entered elements=%d",sum);
    return 0;
}