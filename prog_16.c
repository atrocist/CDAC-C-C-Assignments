#include<stdio.h>

struct sample
{
	unsigned int a:4;
	unsigned int b:2;
	unsigned int c:5;
//	float f:10;
}s1;

int main()
{
	struct s1;

	s1.a=9;
	s1.b=5;
	s1.c=50;

	printf("%u \t %u \t %u \n",s1.a,s1.b,s1.c);

	return 0;
}
