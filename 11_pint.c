#include<stdio.h>
#define PINT int*

typedef int* pint;
int main()
{
	PINT p1,*p2;
	pint p3,p4;
	int a=10,b=20;
	p1=&a;
	p2=&b;

	p3=&a;
	p4=&b;
	printf("p1::%u\tp2::%u\tp3::%u\tp4::%u\t*p1::%d\t*p2::%d\t*p3::%d\t*p4::%d\n",p1,p2,p3,p4,*p1,*p2,*p3,*p4);
	return 0;
}
