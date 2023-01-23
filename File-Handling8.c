#include<stdio.h>
int main()
{
   if (remove("Hasrat5.txt") == 0)
      printf("Deleted successfully");
   else
      printf("Unable to delete the file");
  
   return 0;
}