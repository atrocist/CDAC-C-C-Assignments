//WAP to generate fibonacci series consisting of COUNT number of elements using recursion

#include <stdio.h>

int fib(int );
int main()
{
	int count,i;
	printf("\nEnter the count upto which fibonacci series needs to be generated : ");
	scanf("%d",&count);
	printf("\n0\n1");
	for(i=1;i<count-1;i++)
		printf("\n%d\n",fib(i));
	return 0;
}

int fib(int cnt)
{ 
	if((cnt==1) || (cnt==0))
		return 1;
	else
		return (fib(cnt-1) + fib(cnt-2));
}
