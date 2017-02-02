#include<stdio.h>

int main()
{
	float i=20.1;

	int *p;

	float *q;

	void *pv;

	q=&i;
        printf("Value of i is %f \n",*q);

        pv=q;
	p=pv;

	printf("value of i after is %f \n",*p);

	return 0;
}
