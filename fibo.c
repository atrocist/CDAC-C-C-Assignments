//WAP to generate fibonacci series consisting of COUNT number of elements using recursion

#include <stdio.h>

int main()
{
	int count,a[100],i;
	printf("\nEnter the count upto which fibonacci series needs to be generated : \n");
	scanf("%d",&count);
	a[0]=0;
	a[1]=1;
	for(i=0;i<count;i++)
	{
		a[i+2]=a[i]+a[i+1];
		printf("\n%d",a[i]);
	}
}
