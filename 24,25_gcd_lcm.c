//WAP to find the GCD & LCM of 2 numbers

#include<stdio.h>

int main()
{
	int a,b,temp,i,lcm;
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	temp=a;
	for(i=temp;i>=1;i--)
	{
		if((a%i==0)&&(b%i==0))
		{
			printf("\nGCD of the two numbers is : %d\n",i);
			break;
		}
	}
	lcm=(a*b)/i;
	printf("\nLCM of the two numbers is : %d\n",lcm);
	return 0;
}
