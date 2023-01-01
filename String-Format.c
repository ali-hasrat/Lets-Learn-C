/*program to print format like this:
  h
  h e
  h e l 
  h e l l
  h e l l o*/

  #include<stdio.h>
  #include<string.h>
  int main()
  {
    char word[100];
    printf("Enter the word we want to format: ");
    gets(word);
    for(int i=0;word[i]!='\0';i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" %c",word[j]);
        }
        printf("\n");
    }
     return 0;
  }