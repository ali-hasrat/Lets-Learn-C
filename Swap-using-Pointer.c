//program to swap using pointer
#include<stdio.h>  
int main()
{  
   int a,b;
   int *p1=&a,*p2=&b; 
   scanf("%d%d",&a,&b); 
   printf("Before swap: *p1=%d *p2=%d",*p1,*p2);  
   *p1=*p1+*p2;  
   *p2=*p1-*p2;  
   *p1=*p1-*p2;  
   printf("\nAfter swap: *p1=%d *p2=%d",*p1,*p2);  
   return 0;  
}  
