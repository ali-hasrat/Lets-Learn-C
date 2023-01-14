// program, using an array of pointers to a structure, to read and display the data of students..
#include<stdio.h>
#include<stdlib.h>
struct data
{
    char name[50],course[50];
    int roll_no,fees;
}*std[100];
int main()
{
    int n;
    printf("Enter the no of students:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        std[i]=(struct data *)malloc(sizeof(struct data));
        printf("Enter details of Student[%d]:\n",i);
        printf("Roll No:");
        scanf("%d",&std[i]->roll_no);
        printf("Name:");
        scanf("%s",std[i]->name);
        printf("Course:");
        scanf("%s",std[i]->course);
        printf("Fees:");
        scanf("%d",&std[i]->fees);
    }
    printf("The details of the students are:\n");
    for(int i=1;i<=n;i++)
    {
        printf("Roll No:%d\n",std[i]->roll_no);
        printf("Name:%s\n",std[i]->name);
        printf("Course:%s\n",std[i]->course);
        printf("Fees:%d",std[i]->fees);
    }
    return 0;
}
