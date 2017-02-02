#include<stdio.h>

int main()
{
	int *p,**q;
	int x=10;

	p=&x;

	q=&p;

	printf("\n&p::%u\tp=::%u\tq=::%u\t*p=::%d\t*q=::%u\t**q::%d\t",&p,p,q,*p,*q,**q);
	return 0;
}
