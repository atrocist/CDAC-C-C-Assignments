#include<stdio.h>

int main()
{
	int i,a[10];

        for(i=0;i<5;i++)
	{
	a[i]=rand()/10000;

	printf("a[%d] is %d \n",i,a[i]);
	}
	return 0;
}
