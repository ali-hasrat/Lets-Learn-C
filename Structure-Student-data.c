//program to print student data using structure

#include<stdio.h>
struct std_data
{
    char name[30];
    int roll_no;
    float marks;
} std1,std2,std3;

int main()
{
    printf("Enter name,roll_no and marks of Student 1:");
    scanf("%s%d%f",&std1.name,&std1.roll_no,&std1.marks);
    printf("Enter name,roll_no and marks of Student 2:");
    scanf("%s%d%f",&std2.name,&std2.roll_no,&std2.marks);
    printf("Enter name,roll_no and marks of Student 3:");
    scanf("%s%d%f",&std3.name,&std3.roll_no,&std3.marks);
    printf("student 1-\nName:%s\nRoll no:%d\nMarks:%f",std1.name,std1.roll_no,std1.marks);
    printf("\nstudent 2-\nName:%s\nRoll no:%d\nMarks:%f",std2.name,std2.roll_no,std2.marks);
    printf("\nstudent 1-\nName:%s\nRoll no:%d\nMarks:%f",std3.name,std3.roll_no,std3.marks);
    return 0;
}
