#include<stdio.h>

int main()
{
	int a,b,temp;
	

	printf("\nenter the two numbers\n");
	scanf("%d%d",&a,&b);

	printf("\nthe values before swapping\na=%d\tb=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	
	printf("\nthe values after swapping once\na=%d\tb=%d",a,b);
	b=b+a;
	a=b-a;
	b=b-a;

	printf("\nthe values after swapping twice\na=%d\tb=%d",a,b);
	b=b^a;
	a=b^a;
	b=b^a;

	printf("\nthe values after swapping thrice\na=%d\tb=%d\n",a,b);
	return 0;


}
