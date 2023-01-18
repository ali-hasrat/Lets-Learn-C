// program to read a text file character by character and write its content twice in a separate file.
#include<stdio.h>
int main()
{
    char str[30];
    FILE *ptr=NULL;
    ptr=fopen("Hasrat0.txt","r");  //Hasrat0.txt is a Plain File storing string to read..
    fscanf(ptr,"%s",&str);
    printf("Reading text from txt file and the text is:\n %s",str);

    printf("\n\n**Writing its content from separate file**\n\n");

    char str2[100]="I am a man of word.";
    // ptr=fopen("Hasrat1.txt","w");  //Hasrat1.txt is a Plain File where we are writing string i.e, str2..
    ptr=fopen("Hasrat1.txt","a");     //to overwrite or repeat the content as many time we want.. 
    fprintf(ptr,"%s",&str2);
    printf("The string in txt file is: %s",str2);
    return 0;
}