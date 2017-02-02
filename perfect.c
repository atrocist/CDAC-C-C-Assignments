#include<stdio.h>

int main()
{
	int num=0,fac_sum=1,temp;
	int i=0;
	printf("\nenter the number::\n");
	scanf("%d",&num);
//	for(num=4;num<=100;num++)
//	{
		fac_sum=1;
	for(i=2;i<=num/2;i++)
	{
		temp=num;
		while(temp%i==0)
		{
			fac_sum=fac_sum+i;
			temp=temp/i;		
		}
	}
	if(num==fac_sum)
		printf("\n%d is a perfect number\n",num);
	else
		printf("\n%d is a not perfect number\n",num);
//	}
	return 0;
}
