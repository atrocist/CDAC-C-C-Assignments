#include<stdio.h>

int main()
{
	int i,j,k,bill,units;
	printf("Enter bill units\n");
	scanf("%d",&units);
	
	if(units<100)
	{
		bill=units*1;
		printf("Bill is %d\n",bill);
	}
	else if(units>100 && units<200)
	{
		units=units-100;
		bill=100+(units*2);
		printf("Bill is %d\n",bill);
	}
	else if(units>=200 && units<=399)
	{
		units=units-200;
		bill=300+(units*3);
		printf("Bill is %d\n",bill);
		
	}
	else
	{
    	units=units-400;
    	bill=900+(units*4);
    	printf("Bill is %d\n",bill);
	}
}