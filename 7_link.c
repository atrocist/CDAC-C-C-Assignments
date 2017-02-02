#include<stdio.h>

int getvalue();
int a=15;
int main()
{
	int u,j;
	printf("Value of global variable a is %d \n",a);
	extern int b;
	j=getvalue();
	printf("Value of b is %d \n",j);
	return 0;
}

int getvalue()
{
    int b;
    printf("Enter value of b \n");
    scanf("%d",&b);
    return b;
}