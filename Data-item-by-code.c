//program to show the data item by code

#include<stdio.h>
struct item_data
   {
     int code;
     char name[30];
     int quantity;
   }item[50];
   int main()
   {
   int i,n;
   printf("Enter the no. of Items:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
      printf("Enter Code,Name and Quantity %d:",i);
      scanf("%d%s%d",&item[i].code,&item[i].name,&item[i].quantity);
    }
      for(i=1;i<=n;i++)
       {
        printf("\n\nItem: %d -\nCode: %d\nName: %s\nQuantity:%d",i,item[i].code,item[i].name,item[i].quantity);
       }
     return 0;
   }