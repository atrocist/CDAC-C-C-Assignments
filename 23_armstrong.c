#include<stdio.h>

int main()
{
	int num,i,j,k,x;
	/*printf("Enter a number\n");
	scanf("%d",&num);
	*/
	
	for(num=1;num<1001;num++)
	{
		i=num/100;
		x=num%100;
		j=x/10;
		k=x%10;
	
		if((i*i*i)+(j*j*j)+(k*k*k)==num)
		printf("Number %d is a armstrong number\n",num);
		else
		printf("Number %d is not a armstrong number\n",num);
	}
	return 0;
}