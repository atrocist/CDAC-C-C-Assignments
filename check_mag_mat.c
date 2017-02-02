#include<stdio.h>

int main()
{
	int a[10][10],i,j,r,sum,sum1,sum2;
	
	printf("Enter number of rows\n");
	scanf("%d",&r);
	printf("Enter elements of an array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
				scanf("%d",&a[i][j]);	

		}
	}
         sum=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}

	sum1=0;
	i=0;	
	for(j=i;j<r;j++)
	{
	     sum1=sum1+a[0][j];
	}

	sum2=0;
	j=0;
	for(i=j;i<r;i++)
	{
		sum2=sum2+a[i][0];
	}	

	if(sum==sum1 && sum==sum2)
		printf("Sum is %d and matrix is magic matrix\n",sum);
	else
		printf("Matrix is not a magic matrix\n");

	return 0;
}
