#include<stdio.h>
 void int2roman(int num)
{
    int integer[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};   //base values
    char *roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};  //roman symbols
    int i = 0;
    while(num>0)                             //repeat process until num is not 0
    {                                        
        while(num/integer[i])                //first base value that divides num is largest base value
        {                                    
            printf("%s",roman[i]);           //print roman symbol equivalent to largest base value
            num -= integer[i];               //subtract largest base value from num
        }
        i++;                                 //move to next base value to divide num
    }
}
int main()
{
    int num;
    printf("Enter the Integer :");
    scanf("%d",&num);
    int2roman(num);
    return 0;
}
