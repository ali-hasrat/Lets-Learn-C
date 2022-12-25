#include<stdio.h>
int swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
printf("after swap:a=%d\nb=%d",a,b);
}
void main()
{
int a,b,c;
scanf("%d%d",&a,&b);
printf("before swap:a=%d\nb=%d\n",a,b);
swap(a,b);
}
