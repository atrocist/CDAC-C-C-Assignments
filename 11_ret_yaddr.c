#include<stdio.h>
int* sqr(int x);
int main()
{
	int *py;
	int x;
	printf("\nenter a number\n");
	scanf("%d",&x);
	py=sqr(x);
	test();
	printf("\nthe sqr is::%d\n",*py);
	return 0;
}
int test()
{
	int x=100;
	int z=22;
	return x;
}
int* sqr(int x)
{
	static int y;
//	int y;//address of local variabl is returned,the scope of variabl is only until the function lasts
	y=x*x;
	return &y;
}
