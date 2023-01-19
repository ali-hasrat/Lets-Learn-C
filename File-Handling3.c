//Take name and salary of two employees as input from the user and write them to a text file..
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr=NULL;
    char name1[30];
    char name2[30];
    int salary1,salary2;
    printf("Enter the Name of employe 1 & 2: ");
    gets(name1);
    gets(name2);
    printf("Enter the Salary of employe 1 & 2: ");
    scanf("%d%d",&salary1,&salary2);
    ptr=fopen("Hasrat2.txt","w");    //writing name and salary in Hasrat2.txt file
    fprintf(ptr,"%s,%d\n",name1,salary1);
    fprintf(ptr,"%s,%d",name2,salary2);
    fclose(ptr);
    return 0;
}
/*

In the text file Hasrat2.txt 
The output will be display in this following format:

Hasrat Ali,25000
Sajid Ali,36000      

*/