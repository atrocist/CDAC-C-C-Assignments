#include<stdio.h>
#include "multi_prg.h"
extern int z;
extern int y;
int main()
{
	int a=1,b=2;
	int c=0;

	c=sum(a,b);
	printf("\nsum::%d\t",c);
	c=sqr(c);
	printf("\nsqr::%d\n",c);
	printf("\nz::%d\n",z);
	y++;
	printf("\ny::%d\n",y);
	return 0;

}
