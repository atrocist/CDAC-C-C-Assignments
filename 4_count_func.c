#include<stdio.h>
int sum(int x,int y);
int a=50;
//static int y=10;
int main()
{
	int a=10,b=20;
	register int z=10;
	printf("\nsum::%d\n",sum(a,b));
	sum(10,20);
	sum(10,20);
	sum(10,20);
	sum(10,20);
//	printf("\n&z::%u\tz::%d\n",&z,z);
	return 0;
}

int sum(int a,int b)
{
	static int x=0;
	x++;
	printf("\nx::%d\n",x);
	return(a+b);
}
