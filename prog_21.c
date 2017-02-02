#include<stdio.h>

struct upper
{
	int a;
	union lower
	{
		int b;
	}l0;
	union lower1
	{
		int c;
	}l1;

}u1;

union ABCD
{
	double g;
	struct str
	{
		float e;
		float f;
	}s1;	
}d1;

int main()
{
	int i,j,k;
	d1.s1.e=4.0;
	d1.s1.f=4.0;
	printf("Sizeof structure variable is %d \n",sizeof(u1));
	
	u1.l0.b=4;
	u1.l1.c=2;

	printf("Result is %d \n",u1.a=u1.l0.b+u1.l1.c);
	
	printf("Value of union variable is %lf \n",d1.g);
	return 0;
}
