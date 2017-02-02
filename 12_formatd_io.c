#include<stdio.h>

int main()
{

	int a,b,c,d;
	float i,j,k,l;

	printf("\nenter the 4 integers\n");
	scanf("%5d%4d%4d%2d",&a,&b,&c,&d);

	printf("\na=%5d b=%-4d c=%05d d=%7d",a,b,c,d);
	
	printf("\nenter 2 float numbers");
	scanf("%f%f",&i,&j);

	printf("\ni=%f j=%.f\n",i,j);

	return 0;
}


