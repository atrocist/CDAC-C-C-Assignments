//PROGRAM TO TYPEDEF INT TO FUNCTION POINTER

#include<stdio.h>

int sum(int,int);
int main()
{
	int result,num1,num2;
	typedef int (*pftype)();
	pftype pf1;
	pf1=sum;
	printf("Enter two numbers \n");
	scanf("%d%d",&num1,&num2);
	result=pf1(num1,num2);
        printf("addition of %d and %d is %d \n",num1,num2,result);
	return 0;
}

int sum(int a,int b)
{
	int c;
	return c=a+b;
}
