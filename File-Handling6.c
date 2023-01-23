//program in C to encrypt a text file... Also, program  to decrypt  previously encrypted file...
//Encryption
#include<stdio.h>
int main()
{
    char fname[20];
    int  ch;
    FILE *ptr1, *ptr2;
    printf("Enter Filename: ");
    gets(fname);
    ptr1 = fopen(fname, "r");
    if(ptr1 == NULL)
        return 0;
    ptr2 = fopen("temp.txt", "w");
    if(ptr2 == NULL)
        return 0;
    ch = fgetc(ptr1);
    while(ch != EOF)
    {
        ch = ch+100;
        fputc(ch, ptr2);
        ch = fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
    ptr1 = fopen(fname, "w");
    if(ptr1 == NULL)
        return 0;
    ptr2 = fopen("temp.txt", "r");
    if(ptr2 == NULL)
        return 0;
    ch = fgetc(ptr2);
    while(ch != EOF)
    {
        ch = fputc(ch, ptr1);
        ch = fgetc(ptr2);
    }
    fclose(ptr1);
    fclose(ptr2);
    printf("\nFile %s Encrypted Successfully!", fname);
    return 0;
}
//Decryption
#include<stdio.h>
#include<conio.h>
int main()
{
    char fname[20], ch;
    FILE *ptr1, *ptr2;
    printf("Enter Filename: ");
    gets(fname);
    ptr1 = fopen(fname, "w");
    if(ptr1 == NULL)
        return 0;
    ptr2 = fopen("temp.txt", "r");
    if(ptr2 == NULL)
        return 0;
    ch = fgetc(ptr2);
    while(ch != EOF)
    {
        ch = ch-100;
        fputc(ch, ptr1);
        ch = fgetc(ptr2);
    }
    fclose(ptr1);
    fclose(ptr2);
    printf("\nFile %s Decrypted Successfully!", fname);
    getch();
    return 0;
}