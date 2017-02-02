#include<stdio.h>
void main()
{
	int (*q)[3][4];
	int a[3][4]={0};
	q=a;
	printf(" %u %u %u %u ",q,*q,**q,***q);



}

