#include<stdio.h>
#define PI 3.1416

const double pi=3.1416;
int main()
{
	double area=0.0,peri=0.0;
	double rad;
	printf("\nenter the radius\n");

	scanf("%lf",&rad);

	area=rad*rad*PI;
	peri=2.0*rad*PI;

	
	printf("\narea=%lf\tperi=%lf\n",area,peri);
	printf("\nenter the radius\n");

	scanf("%lf",&rad);
	
	area=rad*rad*pi;
	peri=2.0*rad*pi;

	printf("\narea=%lf\tperi=%lf\n",area,peri);
	return 0;


	
}
