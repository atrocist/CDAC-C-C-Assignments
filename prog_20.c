#include<stdio.h>

union
{
	int a;
	int b;
	int c;
}a1;
int main()
{
	a1.a=2;
	a1.b=5;
	a1.c=a1.a+a1.b;

	printf("Addition of two numbers is %d \n",a1.c);

	return 0;
}
