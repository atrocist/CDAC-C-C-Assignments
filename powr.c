#include<stdio.h>

int main()
{
	int coef=0,expo=1;
	int op=1,i=1;

	printf("\nenter the coefficient::\n");
	scanf("%d",&coef);
	
	printf("\nenter the exponent::\n");
	scanf("%d",&expo);

	for(i=1;i<=expo;i++)
	{
		op=op*coef;
	}
	printf("\n%d^%d=%d\n",coef,expo,op);
	return 0;
}
