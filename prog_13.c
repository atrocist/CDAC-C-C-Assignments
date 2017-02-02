#include<stdio.h>

typedef struct sum
{
	int res;
}S;

S disp(int,int);

int main()
{
	int a,b;
	S *sp,ob2;
	printf("Enter two numbers: \n");
	scanf("%d%d",&a,&b);
	ob2=disp(a,b);
	printf("sum of two numbers is: %d\n",ob2.res);
	return 0;
}

S disp(int a,int b)
{
	S ob1;
	ob1.res=a+b;
	return ob1;
}
