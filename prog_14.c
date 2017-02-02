#include<stdio.h>

typedef struct
{
	int a;
	int b;
}S;
int main()
{
	S obj1;
	printf("Enter the values of structure members: \n");
	scanf("%d%d",&obj1.a,&obj1.b);

	obj1.a=obj1.a+obj1.b;
	obj1.b=obj1.a-obj1.b;
	obj1.a=obj1.a-obj1.b;

	printf("Values after swapping are %d\t%d\n",obj1.a,obj1.b);

	return 0;
}
