//print data of n number of student using structure

#include<stdio.h>
struct std_data
   {
     char name[30];
     int roll_no;
     float marks;
   }std[50];
   int main()
   {
   int i,n;
   printf("Enter the no. of Students:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
      printf("Enter name,roll_no and marks of Student %d:",i);
      scanf("%s%d%f",&std[i].name,&std[i].roll_no,&std[i].marks);
    }
      printf("The data of students are:");
      for(i=1;i<=n;i++)
       {
        printf("\n\nstudent %d -\nName:%s\nRoll no:%d\nMarks:%f",i,std[i].name,std[i].roll_no,std[i].marks);
       }
     return 0;
   }