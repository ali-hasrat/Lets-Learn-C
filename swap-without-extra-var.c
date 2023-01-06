   //program to swap two no. without using extra variable
//method-I
    #include<stdio.h>
    int main()
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("before swapping a=%d\nb=%d\n",a,b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("after swapping a=%d\nb=%d",a,b);
        return 0;
    }

    //method-II Using XOR Operator
    #include <stdio.h>
    int main()
    {
	int a,b;
	scanf("%d%d",&a,&b);
    printf("before swap:a=%d\nb=%d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
    printf("After swap:a=%d\nb=%d\n",a,b);
	return 0;
}
