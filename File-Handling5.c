//Write a program in C to copy a file in another name.. 
#include<stdio.h>
int main()
{
    FILE *ptr1,*ptr2;
    char c;
    ptr1=fopen("Hasrat4.txt","r");
    if(ptr1==NULL)
	{
		printf("File \"%s\" does not exist!!!\n","Hasrat4.txt");
		return -1;
	}
    ptr2=fopen("Hasrat5.txt","w");
   if(ptr2==NULL)
	{
		printf("File \"%s\" does not exist!!!\n","Hasrat5.txt");
		return -1;
	}
    while((c=fgetc(ptr1))!=EOF)   //Reading the content character by character
    {
        fputc(c,ptr2);            // Here copying content of Hasrat4.txt into Hasrat5.txt
    }
    printf("Successfully Copied");
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}