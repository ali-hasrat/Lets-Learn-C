/*prime no. in ascending order like 
2       3       5       7       11      13   */
#include<stdio.h>
void main()
{
    int n,c;
    printf("enter the no. to which prime no. to be found:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        c=0;
        for(int a=2;a<=i/2;a++)
        {
            if(i%a==0)
            {
                c++;
                break;
            }
        }
        if(c==0 && i!=1)
        {
            printf("%d\t",i);
        }
    }
}
