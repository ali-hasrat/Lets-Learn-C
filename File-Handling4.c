//program in C to find the content of the file and number of lines in a Text File..
#include <stdio.h>
int main()
{
	FILE *ptr=NULL;
	char ch;
	int i=1;
    ptr=fopen("Hasrat3.txt","r"); // Hasrat3.txt contains contents of file i.e, text in no. of lines.. 
	if(ptr==NULL)
	{
		printf("File \"%s\" does not exist!!!\n","Hasrat3.txt");
		return -1;
	}
    while((ch=fgetc(ptr))!=EOF) //read character by character and check for new line	
	{
		if(ch=='\n')
        i++;
	}
	fclose(ptr);  //close the file
	printf("Total number of lines are: %d\n",i);  // i reprents total no. of lines 
	return 0;	
}
